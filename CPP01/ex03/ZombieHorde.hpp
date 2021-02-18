#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int i);
		ZombieHorde(std::string str_type, int i);
		~ZombieHorde();

		void announce();

	private:
		Zombie *zombie;
		std::string type;
		int n;
};


#endif
