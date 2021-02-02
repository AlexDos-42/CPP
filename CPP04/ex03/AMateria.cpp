#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _xp(0), m_type(type)
{}

AMateria::AMateria(const AMateria &copy): _xp(copy._xp), m_type(copy.m_type)
{}

AMateria		&AMateria::operator=(const AMateria &copy)
{
	this->_xp = copy._xp;
	this->m_type = copy.m_type;
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

void AMateria::use(ICharacter &target)
{
    (void)target;
    _xp += 10;
}