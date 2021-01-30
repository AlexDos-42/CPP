#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &ref): Enemy(ref)
{
	std::cout << "Gaaah. Break everything!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant		&SuperMutant::operator=(const SuperMutant &ref)
{
	Enemy::operator=(ref);
	return *this;
}

void		SuperMutant::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg - 3);
}