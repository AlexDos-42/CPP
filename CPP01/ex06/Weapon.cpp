#include "Weapon.hpp"

Weapon::Weapon() : type(std::string())
{}

Weapon::Weapon(std::string str_type)
{
	type = str_type;
}

Weapon::~Weapon()
{}

void Weapon::setType(std::string newtype)
{
	type = newtype;
}

std::string &Weapon::getType()
{
	return (type);
}
