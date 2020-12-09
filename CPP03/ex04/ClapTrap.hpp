#ifndef CLAPTRAP
# define CLAPTRAP

# include <iostream>

class ClapTrap
{
	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &ref);
	~ClapTrap();

	int					getHp();
	std::string			getName();
	
	ClapTrap	&operator=(ClapTrap const &ref);
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	
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