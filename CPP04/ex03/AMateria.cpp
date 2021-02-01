#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : m_type(type), _xp(0)
{}

AMateria::AMateria(const AMateria &copy): _xp(copy._xp), m_type(copy.m_type)
{}

AMateria		&AMateria::operator=(const AMateria &b)
{
	this->_xp = b._xp;
	this->m_type = b.m_type;
	return (*this);
}

AMateria::~AMateria()
{}

std::string const & AMateria::getType() const
{
    return m_type;
}

unsigned int AMateria::getXP() const
{
    return _xp;
}

virtual void AMateria::use(ICharacter& target);
{
    (void)target;
    _xp = 10;
}