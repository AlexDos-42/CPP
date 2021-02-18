#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int i): type(std::string())
{
	n = i;
	if (n > 0)
	{
		zombie = new Zombie[n];
		for(int i = 0; i < n; i++)
			zombie[i].newZombie(zombie->baptem(), type);
	}
	else
		std::cout << "You did'nt creat any zombie" << std::endl;
}

ZombieHorde::ZombieHorde(std::string str_type, int i)
{
	n = i;
	type = str_type;
	if (n > 0)
	{
		zombie = new Zombie[n];
		for(int i = 0; i < n; i++)
			zombie[i].newZombie(zombie->baptem(), type);
	}
	else
		std::cout << "You did'nt creat any zombie" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	if (n > 0)
	{
		std::cout << "Let's destroy the " << type <<" Zombies" << std::endl;
		delete[] zombie;
	}
}

void ZombieHorde::announce()
{
	for(int i = 0; i < n; i++)
		zombie[i].advert();
}
