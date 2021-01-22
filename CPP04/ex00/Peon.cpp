#include "Peon.hpp"

Peon::Peon(std::string const name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &ref): Victim(ref)
{
	*this = ref;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}


Peon			&Peon::operator=(Peon const &ref)
{
	Victim::operator=(ref);
	return *this;
}

void			Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}