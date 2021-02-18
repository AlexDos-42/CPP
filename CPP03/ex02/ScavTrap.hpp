#ifndef SCAVTRAP
# define SCAVTRAP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &ref);
		~ScavTrap();

		ScavTrap	&operator=(ScavTrap const &ref);
		void		challengeNewcomer(std::string const &target);
};

#endif