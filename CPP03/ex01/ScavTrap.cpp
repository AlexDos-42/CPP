#include "ScavTrap.hpp"
#include <cstdlib>

ScavTrap::ScavTrap(): m_hp(100), m_max_hp(100), m_ep(50),
	m_max_ep(50), m_lvl(1), m_melee_dmg(20), m_range_dmg(15), m_armor(3)
{
	this->m_name = "A robot with no name";
	std::cout << m_name << ":\e[94m 'Booting sequence complete. Where is the door ?'\e[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name): m_hp(100), m_max_hp(100), m_ep(50),
	m_max_ep(50), m_lvl(1), m_name(name), m_melee_dmg(20), m_range_dmg(15), m_armor(3)
{
	std::cout << m_name << ":\e[94m 'Booting sequence complete. Where is the door ?'\e[0m" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &ref)
{
	*this = ref;
}

ScavTrap			&ScavTrap::operator=(ScavTrap const &ref)
{
	this->m_hp = ref.m_hp;
	this->m_max_hp = ref.m_max_hp;
	this->m_ep = ref.m_ep;
	this->m_max_ep = ref.m_max_ep;
	this->m_lvl = ref.m_lvl;
	this->m_name = ref.m_name;
	this->m_melee_dmg = ref.m_melee_dmg;
	this->m_range_dmg = ref.m_range_dmg;
	this->m_armor = ref.m_armor;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << m_name << ":\e[94m 'For you...I commit...seddoku...'\e[0m" << std::endl;
}

int					ScavTrap::getHp()
{
	return this->m_hp;
}

std::string			ScavTrap::getName()
{
	return this->m_name;
}

void				ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << m_name << ":\e[94m 'Sniped!'\e[0m" << std::endl;
	std::cout << "➜ " << m_name << " launched a ranged attack at " << target << " causing "
		<< m_range_dmg << " points of damage!" << std::endl;
}

void				ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << m_name << ":\e[94m 'Punching time!'\e[0m" << std::endl;
	std::cout << "➜ " << m_name << " launched a melee attack at " << target << " causing "
		<< m_melee_dmg << " points of damage!" << std::endl;
}

void				ScavTrap::takeDamage(unsigned int amount)
{
	int	dmg = amount - this->m_armor;
	if (dmg < 0)
		dmg = 0;
	if (dmg <= 0){
		std::cout << m_name << ":\e[94m 'Hey, check me out everybody! I'm dancin', I'm dancin'!'\e[0m" << std::endl;
		std::cout << "➜ "<< this->m_name << " took " << dmg << " damage." << std::endl;
		return ;
	}
	std::cout << m_name << ":\e[94m 'That looks like it hurts!'\e[0m" << std::endl;
	m_hp -= dmg;
	if (m_hp < 0)
		m_hp = 0;
	std::cout << "➜ " << m_name << " takes " << dmg << " damage and now have " << m_hp << " hp." << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	m_hp = m_hp + amount;
	if (m_hp > m_max_hp)
		m_hp = m_max_hp;
	std::cout << m_name << ":\e[94m 'I found health!'\e[0m" << std::endl;
	std::cout << "➜ He has now " << m_hp << " hp." << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string challenge[5] =
	{
		"What flavor is red?",
		"Take a chill pill!",
		"Shoot him... he's the real one...",
		"Hack the planet!",
		"Tell me I'm the prettiest!"
	};
	std::cout << m_name << ":\e[94m '" << target << " please complete the following challenge: " << challenge[rand() % 5] << "'\e[0m" << std::endl;
}