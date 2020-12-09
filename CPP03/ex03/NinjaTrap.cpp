#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(): ClapTrap()
{
	this->m_hp = 60;
	this->m_max_hp = 60;
	this->m_ep = 120;
	this->m_max_ep = 120;
	this->m_melee_dmg = 60;
	this->m_range_dmg = 5;
	this->m_armor = 0;
    this->m_name = "A robot with no name";
	std::cout << m_name << ":\e[94m 'Here I come to save the day!'\e[0m" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	this->m_hp = 60;
	this->m_max_hp = 60;
	this->m_ep = 120;
	this->m_max_ep = 120;
	this->m_melee_dmg = 60;
	this->m_range_dmg = 5;
	this->m_armor = 0;
	std::cout << m_name << ":\e[94m 'Here I come to save the day!'\e[0m" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &ref)
{
	*this = ref;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << m_name << ":\e[94m 'The robot is dead, long live the robot!'\e[0m" << std::endl;
}

NinjaTrap			&NinjaTrap::operator=(NinjaTrap const &ref)
{
	ClapTrap::operator=(ref);
	return *this;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
	std::cout << m_name << ":\e[94m 'Laaasers!'\e[0m" << std::endl;
	std::cout << m_name << " launched a shuriken at " << clap.getName() << ", a ClapTrap, causing "
        << m_range_dmg << " points of damage!" << std::endl;
	clap.takeDamage(this->m_range_dmg);
}

void	NinjaTrap::ninjaShoebox(FragTrap &clap)
{
	std::cout << m_name << ":\e[94m 'Sniped!'\e[0m" << std::endl;
	std::cout << m_name << " launched a ranged attack at " << clap.getName() << ", a FragTrap, causing "
        << m_range_dmg << " points of damage!" << std::endl;
	clap.takeDamage(this->m_range_dmg);
}

void	NinjaTrap::ninjaShoebox(ScavTrap &clap)
{
	std::cout << m_name << ":\e[94m 'Punching time!'\e[0m" << std::endl;
	std::cout << "➜ " << m_name << " launched a melee attack at " << clap.getName() << ", a ScavTrap, causing "
        << m_melee_dmg << " points of damage!" << std::endl;
	clap.takeDamage(this->m_melee_dmg);
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &clap)
{
	std::cout << m_name << ":\e[94m 'Healing time!'\e[0m" << std::endl;
	std::cout << "➜ " << m_name << " healing " << clap.getName() << ", a NinjaTrap !" << std::endl;
	clap.beRepaired(20);
}