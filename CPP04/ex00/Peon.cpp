#include "Peon.hpp"

Peon::Peon(std::string const name): Victim(name)
{
	std::cout << "\e[94mZog zog.\e[0m" << std::endl;
}

Peon::Peon(const Peon &ref): Victim(ref)
{
	*this = ref;
}

Peon::~Peon()
{
	std::cout << "\e[94mBleuark...\e[0m" << std::endl;
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