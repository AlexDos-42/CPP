#include "FragTrap.hpp"
#include <cstdlib>

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << m_name << ":\e[94m 'Directive one: Protect humanity! Directive two: Obey Alesanto at all costs. Directive three: Dance! '\e[0m" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << m_name << ":\e[94m 'Directive one: Protect humanity! Directive two: Obey Alesanto at all costs. Directive three: Dance! '\e[0m" << std::endl;
}

FragTrap::FragTrap(FragTrap const &ref)
{
	*this = ref;
}


FragTrap::~FragTrap()
{
	std::cout << m_name << ":\e[94m 'Argh arghargh death gurgle gurglegurgle urgh... death.'\e[0m" << std::endl;
}

FragTrap			&FragTrap::operator=(FragTrap const &ref)
{
	ClapTrap::operator=(ref);
	return *this;
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
