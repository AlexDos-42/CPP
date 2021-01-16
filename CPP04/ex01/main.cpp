#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main(void)
{
	Character	*moi = new Character("moi");

	std::cout << *moi;
	
	Enemy		*b = new RadScorpion();

	AWeapon		*pr = new PlasmaRifle();
	AWeapon		*pf = new PowerFist();

	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);

	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;

	std::cout << std::endl;

	Enemy		*c = new SuperMutant();

	moi->attack(c);
	std::cout << *moi;
	moi->attack(c);
	std::cout << *moi;
	moi->attack(c);
	std::cout << *moi;
	moi->equip(pf);
	std::cout << *moi;
	moi->attack(c);
	std::cout << *moi;
	moi->recoverAP();
	std::cout << *moi;
	moi->recoverAP();
	std::cout << *moi;
	moi->recoverAP();
	std::cout << *moi;
	moi->recoverAP();
	std::cout << *moi;
    moi->attack(c);
	std::cout << *moi;
	moi->attack(c);
	std::cout << *moi;
	moi->attack(c);
	std::cout << *moi;

	std::cout << std::endl;

	Character	*toi = new Character("toi");

	std::cout << *toi;
	toi->attack(c);
	
	delete moi;
	delete pr;
	delete pf;
	delete toi;
	return (0);
}