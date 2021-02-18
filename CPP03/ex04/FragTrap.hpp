#ifndef FRAGTRAP
# define FRAGTRAP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &ref);
		virtual ~FragTrap();

		FragTrap	&operator=(FragTrap const &ref);
		void		vaulthunter_dot_exe(std::string const &target);
};

#endif