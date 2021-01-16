#include "Victim.hpp"

Victim::Victim(std::string const name): m_name(name)
{
	std::cout << "Some random victim called " << m_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &ref)
{
	*this = ref;
}

Victim::~Victim()
{
	std::cout << "Victim " << m_name << " died for no apparent reason!" << std::endl;
}


Victim			&Victim::operator=(Victim const &ref)
{
	this->m_name = ref.m_name;
	return *this;
}

std::string			Victim::getName() const
{
	return m_name;
}

void		Victim::getPolymorphed(void) const
{
	std::cout << m_name << " was just polymorphed in a cute little sheep!" << std::endl;
}

std::ostream	&operator<<(std::ostream &ost, const Victim &victim)
{
	ost << "I'm " << victim.getName() << ", and I like otters!" << std::endl;
	return ost;
}