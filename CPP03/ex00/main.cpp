#include "FragTrap.hpp"
#include <cstdlib>

int	main(void)
{
	FragTrap frag("Bob");

	srand(time(NULL));
	frag.meleeAttack("Greg");
	frag.rangedAttack("Judy");
    std::cout << frag.getName() << " has " << frag.getHp() << " hp" << std::endl;
	frag.takeDamage(46);
	frag.beRepaired(50);
    frag.takeDamage(3);
	frag.takeDamage(42);
	frag.takeDamage(70);
	frag.beRepaired(10);
	frag.vaulthunter_dot_exe("Greg");
	frag.vaulthunter_dot_exe("Judy");
	frag.vaulthunter_dot_exe("Judy");
	frag.vaulthunter_dot_exe("Greg");
	frag.vaulthunter_dot_exe("Judy");

	return (0);
}