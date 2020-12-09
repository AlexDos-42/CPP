#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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

	std::cout << std::endl;

	ScavTrap scav("Max");

	scav.meleeAttack("Greg");
	scav.rangedAttack("Judy");
    std::cout << scav.getName() << " has " << scav.getHp() << " hp" << std::endl;
	scav.takeDamage(46);
	scav.beRepaired(50);
    scav.takeDamage(3);
	scav.takeDamage(42);
	scav.takeDamage(70);
	scav.beRepaired(10);
	scav.challengeNewcomer("Greg");
	scav.challengeNewcomer("Judy");
	scav.challengeNewcomer("Judy");
	scav.challengeNewcomer("Greg");
	scav.challengeNewcomer("Judy");

	std::cout << std::endl;

	NinjaTrap ninja("Joe");

	scav.meleeAttack("Greg");
	scav.rangedAttack("Judy");
    std::cout << scav.getName() << " has " << scav.getHp() << " hp" << std::endl;
	scav.takeDamage(46);
	scav.beRepaired(50);
    scav.takeDamage(3);
	scav.takeDamage(42);
	scav.takeDamage(70);
	scav.beRepaired(10);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(ninja);

	std::cout << std::endl;

	SuperTrap super("john");
	super.vaulthunter_dot_exe("Judy");
	super.ninjaShoebox(ninja);
	super.ninjaShoebox(frag);
	super.ninjaShoebox(scav);

	std::cout << std::endl;

	std::cout << std::endl;
	return 0;
}