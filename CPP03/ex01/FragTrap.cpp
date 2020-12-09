#include "FragTrap.hpp"

FragTrap::FragTrap(): m_hp(100), m_max_hp(100), m_ep(100),
    m_max_ep(100), m_lvl(1), m_melee_dmg(30), m_range_dmg(20), m_armor(5)
{
    this->m_name = "A robot with no name";
	std::cout << m_name << ":\e[94m 'Directive one: Protect humanity! Directive two: Obey Alesanto at all costs. Directive three: Dance! '\e[0m" << std::endl;
}

FragTrap::FragTrap(std::string name): m_hp(100), m_max_hp(100), m_ep(100),
    m_max_ep(100), m_lvl(1), m_name(name), m_melee_dmg(30), m_range_dmg(20), m_armor(5)
{
	std::cout << m_name << ":\e[94m 'Directive one: Protect humanity! Directive two: Obey Alesanto at all costs. Directive three: Dance! '\e[0m" << std::endl;
}

FragTrap::FragTrap(FragTrap const &ref)
{
	*this = ref;
	return ;
}

FragTrap			&FragTrap::operator=(FragTrap const &ref)
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

FragTrap::~FragTrap()
{
	std::cout << m_name << ":\e[94m 'Argh arghargh death gurgle gurglegurgle urgh... death.'\e[0m" << std::endl;
}

int					FragTrap::getHp()
{
	return this->m_hp;
}

std::string			FragTrap::getName()
{
	return this->m_name;
}

void				FragTrap::rangedAttack(std::string const &target)
{
	std::cout << m_name << ":\e[94m 'Sniped!'\e[0m" << std::endl;
	std::cout << m_name << " launched a ranged attack at " << target << " causing "
        << m_range_dmg << " points of damage!" << std::endl;
}

void				FragTrap::meleeAttack(std::string const &target)
{
	std::cout << m_name << ":\e[94m 'Punching time!'\e[0m" << std::endl;
	std::cout << "➜ " << m_name << " launched a melee attack at " << target << " causing "
        << m_melee_dmg << " points of damage!" << std::endl;
}

void				FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
{
	m_hp = m_hp + amount;
	if (m_hp > m_max_hp)
		m_hp = m_max_hp;
	std::cout << m_name << ":\e[94m 'I found health!'\e[0m" << std::endl;
	std::cout << "➜ He has now " << m_hp << " hp." << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    if (m_ep < 25){
        std::cout << m_name << ":\e[94m 'Hnngh! Empty!'\e[0m" << std::endl;
		std::cout << "➜ " << m_name << " does not have enough energy! (" << m_ep << "/" << m_max_ep << ")" << std::endl;
    }
	else
	{
        std::string attack[5] =
        {
            "Tornado of death and bullets !",
            "The PUNCHline !",
            "Lightening! Kukachow !",
            "Grenade confetti !",
            "Boogie time !"
        };
		std::cout << m_name << " does \e[91m" << attack[rand() % 5] << "\e[0m attack to " << target << " with " << rand() % m_melee_dmg << " points of damage!" << std::endl;
		m_ep = m_ep - 25;
		std::cout << "➜ His Energy is now " << m_ep << "/" << m_max_ep << "." << std::endl;
		if (m_ep < 0)
			m_ep = 0;
	}
}
