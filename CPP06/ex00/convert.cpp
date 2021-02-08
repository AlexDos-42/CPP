#include "convert.hpp"

Convert::Convert(std::string str): m_str(str)
{
    Convert::convert();
}

Convert::Convert(const Convert &copy): m_str(copy.m_str), m_c(copy.m_c), m_i(copy.m_i), m_f(copy.m_f), m_d(copy.m_d)
{
	for (int i = 0; i < 4; i++)
		m_flag[i] = copy.m_flag[i];
}

Convert::~Convert()
{}

void Convert::setFlag(int i, std::string flag)
{
    m_flag[i] = flag;
}

std::string Convert::getFlag(int i) const
{
    return(m_flag[i]);
}

char Convert::getChar() const
{
    return(m_c);
}

int Convert::getInt() const
{
    return(m_i);
}

float Convert::getFloat() const
{
    return(m_f);
}

double Convert::getDouble() const
{
    return(m_d);
}

int		Convert::isChar(std::string str) const
{
	if (str.length() != 1 || std::isdigit(str[0]))
		return (0);
	return (1);
}

int		Convert::isInt(std::string str) const
{
	size_t i;

	i = 0;
	if (str[0] == '+' || str[0] == '-')
		i = 1;
	for ( ; i < str.length(); i++)
		if (!std::isdigit(str[i]))
			return (0);
	return (1);
}

int		Convert::isFloat(std::string str) const
{
	size_t	i;
	int	dot;

	i = 0;
	dot = 0;
	if (str[0] == '+' || str[0] == '-')
		i = 1;
	if (str[str.length() - 1] != 'f')
		return (0);
	for ( ; i < str.length() - 1; i++)
	{
		if (!std::isdigit(str[i]))
		{
			if (str[i] == '.')
				dot++;
			else
				return (0);
		}
	}
	if (dot != 1)
		return (0);
	return (1);
}

int		Convert::isDouble(std::string str) const
{
	size_t	i;
	int	dot;

	i = 0;
	dot = 0;
	if (str[0] == '+' || str[0] == '-')
		i = 1;
	for ( ; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
		{
			if (str[i] == '.')
				dot++;
			else
				return (0);
		}
	}
	if (dot != 1)
		return (0);
	return (1);
}

int		Convert::isDot() const
{
	if (Convert::isChar(m_str))
		return (1);
	if (Convert::isInt(m_str))
		return (1);
	if (Convert::isFloat(m_str))
	{
		if (!std::isnan(m_f) && !std::isinf(m_f))
			return (1);
	}
	if (Convert::isDouble(m_str))
	{
		if (!std::isnan(m_d) && !std::isinf(m_d))
			return (1);
	}
	return (0);
}

void		Convert::convert_c()
{
    m_c = m_str[0];
	m_i = static_cast<int>(m_c);
	m_f = static_cast<float>(m_c);
	m_d = static_cast<double>(m_c);
}

void		Convert::convert_i()
{
    long int tmp;
    tmp = std::atol(m_str.c_str());
    if (tmp > std::numeric_limits<int>::max()
    || tmp < std::numeric_limits<int>::min())
    {
        for (int i = 0; i < 4; i++)
            Convert::setFlag(i, "impossible");
        return ;
    }
    m_i = std::atoi(m_str.c_str());
    m_c = static_cast<char>(m_i);
    m_f = static_cast<float>(m_i);
    m_d = static_cast<double>(m_i);
}

void		Convert::convert_f()
{
    m_f = std::atof(m_str.c_str());
	m_c = static_cast<char>(m_f);
	m_i = static_cast<int>(m_f);
	m_d = static_cast<double>(m_f);
}

void		Convert::convert_d()
{
    m_d = std::atof(m_str.c_str());
    m_c = static_cast<char>(m_d);
    m_i = static_cast<int>(m_d);
    m_f = static_cast<double>(m_d);
}

void		Convert::convert()
{
	if (Convert::isChar(m_str))
        convert_c();
	else
	{
		if (Convert::isInt(m_str))
            convert_i();
		else if (Convert::isFloat(m_str) || m_str == "+inff" || m_str == "-inff" || m_str == "nanf")
            convert_i();
		else if (Convert::isDouble(m_str) || m_str == "+inf" || m_str == "-inf" || m_str == "nan")
            convert_f();
		else
		{
			for (int i = 0; i < 4; i++)
				Convert::setFlag(i, "impossible");
			return ;
		}
		if ((m_i >= 0 && m_i < 32) || m_i == 127)
			Convert::setFlag(0, "non displayable");
		else if (m_i < 0 || m_i > 127)
			Convert::setFlag(0, "impossible");
		if (m_d > std::numeric_limits<int>::max()
		|| m_d < std::numeric_limits<int>::min()
		|| m_str == "nan" || m_str == "nanf")
		{
			Convert::setFlag(0, "impossible");
			Convert::setFlag(1, "impossible");
		}
	}
}

std::ostream	&operator<<(std::ostream &ost, const Convert &conv)
{
	ost << "char: ";
	if (conv.getFlag(0) != "")
		ost << conv.getFlag(0) << std::endl;
	else
		ost << conv.getChar() << std::endl;

	ost << "int: ";
	if (conv.getFlag(1) != "")
		ost << conv.getFlag(1) << std::endl;
	else
		ost << conv.getInt() << std::endl;

	std::stringstream	ss;
	std::string		str;

	ost << "float: ";
	if (conv.getFlag(2) != "")
		ost << conv.getFlag(2) << std::endl;
	else
	{
		ss << conv.getFloat();
		str = ss.str();
		if (conv.isDot() && str.find('.') == std::string::npos)
			ss << ".0";
		ost << ss.str() << "f" << std::endl;
	}

	ss.str("");
	ost << "double: ";
	if (conv.getFlag(3) != "")
		ost << conv.getFlag(3) << std::endl;
	else
	{
		ss << conv.getDouble();
		str = ss.str();
		if (conv.isDot() && str.find('.') == std::string::npos)
			ss << ".0";
		ost << ss.str() << std::endl;
	}
	return (ost);
}