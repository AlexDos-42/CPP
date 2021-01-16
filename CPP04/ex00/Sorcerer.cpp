#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const name, std::string const title): m_name(name), m_title(title)
{
	std::cout << m_name << ", " << m_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &ref)
{
	*this = ref;
}

Sorcerer::~Sorcerer()
{
	std::cout << m_name << ", " << m_title << ", is dead. Consequences will never be the same!" << std::endl;
}


Sorcerer			&Sorcerer::operator=(Sorcerer const &ref)
{
	this->m_name = ref.m_name;
	this->m_title = ref.m_title;
	return *this;
}

std::string			Sorcerer::getName() const
{
	return m_name;
}

std::string			Sorcerer::getTitle() const
{
	return m_title;
}


void		Sorcerer::polymorph(const Victim &victim) const
{
	victim.getPolymorphed();
}

std::ostream	&operator<<(std::ostream &ost, const Sorcerer &sorcerer)
{
	ost << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return ost;
}