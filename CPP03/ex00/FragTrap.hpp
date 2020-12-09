#ifndef FRAGTRAP
# define FRAGTRAP

# include <iostream>

class FragTrap
{
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &ref);
	~FragTrap();

	int					getHp();
	std::string			getName();
	
	FragTrap	&operator=(FragTrap const &ref);
	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const &target);
	
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