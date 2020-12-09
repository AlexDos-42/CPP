#ifndef SCAVTRAP
# define SCAVTRAP

# include <iostream>

class ScavTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &ref);
	~ScavTrap();

	int					getHp();
	std::string			getName();
	
	ScavTrap	&operator=(ScavTrap const &ref);
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(std::string const &target);
	
	protected:
	int		m_hp;
	int		m_max_hp;
	int		m_ep;
	int		m_max_ep;
	int		m_lvl;
	std::string	m_name;
	int		m_melee_dmg;
	int		m_range_dmg;
	int		m_armor;
};

#endif