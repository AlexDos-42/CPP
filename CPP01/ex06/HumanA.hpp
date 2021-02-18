#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string str, Weapon &type_weapon);
		~HumanA();

		void attack();

	private:
		std::string	name;
		Weapon		&ownWeapon;
};


#endif