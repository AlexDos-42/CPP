#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): m_hp(100), m_max_hp(100), m_ep(100),
	m_max_ep(100), m_lvl(1), m_melee_dmg(30), m_range_dmg(20), m_armor(5)
{
	this->m_name = "A robot with no name";
	std::cout << "ClapTrap " << m_name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(std::string name): m_hp(100), m_max_hp(100), m_ep(100),
	m_max_ep(100), m_lvl(1), m_name(name), m_melee_dmg(30), m_range_dmg(20), m_armor(5)
{
	std::cout << "ClapTrap " << m_name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ref)
{
	*this = ref;
}

ClapTrap			&ClapTrap::operator=(ClapTrap const &ref)
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

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << m_name << " destroyed" << std::endl;
}

int					ClapTrap::getHp()
{
	return this->m_hp;
}

std::string			ClapTrap::getName()
{
	return this->m_name;
}

void				ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << m_name << ":\e[94m 'Sniped!'\e[0m" << std::endl;
	std::cout << m_name << " launched a ranged attack at " << target << " causing "
		<< m_range_dmg << " points of damage!" << std::endl;
}

void				ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << m_name << ":\e[94m 'Punching time!'\e[0m" << std::endl;
	std::cout << "➜ " << m_name << " launched a melee attack at " << target << " causing "
		<< m_melee_dmg << " points of damage!" << std::endl;
}

void				ClapTrap::takeDamage(unsigned int amount)
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

void	ClapTrap::beRepaired(unsigned int amount)
{
	m_hp = m_hp + amount;
	if (m_hp > m_max_hp)
		m_hp = m_max_hp;
	std::cout << m_name << ":\e[94m 'I found health!'\e[0m" << std::endl;
	std::cout << "➜ He has now " << m_hp << " hp." << std::endl;
}