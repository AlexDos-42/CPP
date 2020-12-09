#ifndef NINJATRAP
# define NINJATRAP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &ref);
	~NinjaTrap();

	NinjaTrap	&operator=(NinjaTrap const &ref);
	void		ninjaShoebox(ClapTrap &clap);
	void		ninjaShoebox(FragTrap &frag);
	void		ninjaShoebox(ScavTrap &scav);
	void		ninjaShoebox(NinjaTrap &ninja);
};

#endif