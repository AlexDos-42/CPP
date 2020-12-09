#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->m_ep = 50;
	this->m_max_ep = 50;
	this->m_melee_dmg = 20;
	this->m_range_dmg = 15;
	this->m_armor = 3;
    this->m_name = "A robot with no name";
	std::cout << m_name << ":\e[94m 'Booting sequence complete. Where is the door ?'\e[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->m_ep = 50;
	this->m_max_ep = 50;
	this->m_melee_dmg = 20;
	this->m_range_dmg = 15;
	this->m_armor = 3;
	std::cout << m_name << ":\e[94m 'Booting sequence complete. Where is the door ?'\e[0m" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &ref)
{
	*this = ref;
}


ScavTrap::~ScavTrap()
{
	std::cout << m_name << ":\e[94m 'For you...I commit...seddoku...'\e[0m" << std::endl;
}

ScavTrap			&ScavTrap::operator=(ScavTrap const &ref)
{
	ClapTrap::operator=(ref);
	return *this;
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