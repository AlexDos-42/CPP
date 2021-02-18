#include "SuperTrap.hpp"

SuperTrap::SuperTrap(): ClapTrap(), FragTrap(), NinjaTrap()
{
	this->m_hp = FragTrap::m_hp;
	this->m_max_hp = FragTrap::m_max_hp;
	this->m_ep = NinjaTrap::m_ep;
	this->m_max_ep = NinjaTrap::m_max_ep;
	this->m_melee_dmg = NinjaTrap::m_melee_dmg;
	this->m_range_dmg = FragTrap::m_range_dmg;
	this->m_armor = FragTrap::m_armor;
	this->m_name = "A robot with no name";
	std::cout << m_name << ":\e[94m 'I will prove to you my robotic superiority!'\e[0m" << std::endl;
}

SuperTrap::SuperTrap(std::string name): ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	this->m_hp = FragTrap::m_hp;
	this->m_max_hp = FragTrap::m_max_hp;
	this->m_ep = NinjaTrap::m_ep;
	this->m_max_ep = NinjaTrap::m_max_ep;
	this->m_melee_dmg = NinjaTrap::m_melee_dmg;
	this->m_range_dmg = FragTrap::m_range_dmg;
	this->m_armor = FragTrap::m_armor;
	std::cout << m_name << ":\e[94m 'I will prove to you my robotic superiority!'\e[0m" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &ref)
{
	*this = ref;
}

SuperTrap::~SuperTrap()
{
	std::cout << m_name << ":\e[94m 'You got me!'\e[0m" << std::endl;
}

SuperTrap			&SuperTrap::operator=(SuperTrap const &ref)
{
	ClapTrap::operator=(ref);
	return *this;
}