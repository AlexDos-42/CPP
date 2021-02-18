#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	name = str;
}

HumanB::~HumanB()
{}

void HumanB::attack()
{
	std::cout << name << " attacks with his " << ownWeapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &str_Weapon)
{
	ownWeapon = &str_Weapon;
}
