#include "Child.hpp"

Child::Child(std::string const name): Victim(name)
{
	std::cout << "\e[94mHellooooo\e[0m" << std::endl;
}

Child::Child(const Child &ref): Victim(ref)
{
	*this = ref;
}

Child::~Child()
{
	std::cout << "\e[94mBye bye\e[0m" << std::endl;
}


Child			&Child::operator=(Child const &ref)
{
	Victim::operator=(ref);
	return *this;
}

void			Child::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into an adult!" << std::endl;
}