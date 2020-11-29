#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &type_weapon) : ownWeapon(type_weapon)
{
    name = str;
}

HumanA::~HumanA()
{}

void HumanA::attack()
{
    std::cout << name << " attacks with his " << ownWeapon.getType() << std::endl;
}