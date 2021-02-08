#ifndef CONVERT
# define CONVERT

# include <iostream>
# include <cstdlib>
# include <limits>
# include <cmath>
# include <sstream>

class Convert
{
    public:
        Convert(std::string str);
        Convert(const Convert &copy);
	    ~Convert();

        void        setFlag(int i, std::string flag);
        std::string getFlag(int i) const;
        char        getChar() const;
        int         getInt() const;
        float       getFloat() const;
        double      getDouble() const;

        void	    convert();
        void	    convert_c();
        void	    convert_i();
        void	    convert_d();
        void	    convert_f();

        int		    isChar(std::string str) const;
        int		    isInt(std::string str) const;
        int		    isFloat(std::string str) const;
        int		    isDouble(std::string str) const;
        int		    isDot() const;
        
    private:
        std::string		m_str;
        char			m_c;
        int			    m_i;
        float			m_f;
        double			m_d;
        std::string		m_flag[4];

        Convert();
        Convert		&operator=(const Convert&);

};

std::ostream	&operator<<(std::ostream &output, const Convert &conv);

#endif