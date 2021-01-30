#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "FlowerPower.hpp"
#include "Brick.hpp"

int main(void)
{
	Character	*me = new Character("me");

	std::cout << *me;
	
	Enemy		*b = new RadScorpion();

	AWeapon		*pr = new PlasmaRifle();
	AWeapon		*pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << std::endl;

	Enemy		*c = new SuperMutant();

	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->equip(pf);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
    me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;

	std::cout << std::endl;

	Character	*you = new Character("you");

	std::cout << *you;
	you->attack(c);

	Enemy		*d = new Brick();
	AWeapon		*fp = new FlowerPower();

	you->equip(fp);
	you->attack(d);
	std::cout << *you;
	
	delete me;
	delete pr;
	delete pf;
	delete fp;
	delete you;
	delete d;
	return (0);
}