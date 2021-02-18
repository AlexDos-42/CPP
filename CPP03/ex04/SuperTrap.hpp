#ifndef SUPERTRAP
# define SUPERTRAP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap();
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const &ref);
		~SuperTrap();

		SuperTrap	&operator=(SuperTrap const &ref);
};

#endif