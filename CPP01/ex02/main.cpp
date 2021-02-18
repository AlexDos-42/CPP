#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void createWeakZombie()
{
	Zombie  weak;
	std::string type;
	std::string name;

	std::cout << "Oh ! It's a new type of zombie. It's look like a :\n➜ "; 
	std::getline(std::cin, type);
	std::cout << "How do you want to call it ?\n➜ ";
	std::getline(std::cin, name);
	weak.newZombie(name, type);
	std::cout << "Woooooo why do you shoot in the head of " << weak.getName() << ". Relax man." << std::endl;
}

void createGroup(ZombieEvent zombieE, Zombie *zombie[10], std::string type)
{
	std::cout << "Oh my goood ! There are a lot of " << type << " zombies" << std::endl;
	zombieE.setZombieType(type);
	std::cout << "I prefere shoot zombie if they have a name." << std::endl;
	for(int i = 0; i < 5; i++)
		zombie[i] = zombieE.randomChump();
}

int main()
{
	ZombieEvent slow;
	ZombieEvent fast;
	Zombie *slowZombie[5];
	Zombie *fastZombie[5];

	createGroup(slow, slowZombie, "Slow");
	createGroup(fast, fastZombie, "Fast");

	createWeakZombie();

	std::cout << "Let's go, kill them all." << std::endl;
	for(int i = 0; i < 5; i++)
	{
		delete slowZombie[i];
		delete fastZombie[i];
	}
}