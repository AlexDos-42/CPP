#include "FlowerPower.hpp"

FlowerPower::FlowerPower(): AWeapon("FlowerPower", 0, 0)
{}

FlowerPower::FlowerPower(const FlowerPower &ref): AWeapon(ref)
{}

FlowerPower::~FlowerPower()
{
}

FlowerPower	&FlowerPower::operator=(const FlowerPower &ref)
{
	AWeapon::operator=(ref);
	return *this;
}

void		FlowerPower::attack() const
{
	std::cout << "* No pain, just hapiness *" << std::endl;
}