#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* moi = new Character("moi");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	ICharacter* bob = new Character("bob");
	moi->use(0, *bob);
	moi->use(1, *bob);

	std::cout << std::endl;
	tmp = src->createMateria("cure");
	std::cout << tmp->getType() << " has " << tmp->getXP() << "XP" << std::endl;
	moi->equip(tmp);
	moi->use(2, *bob);
	std::cout << tmp->getType() << " has " << tmp->getXP() << "XP" << std::endl;
	moi->unequip(2);
	moi->use(2, *bob);
	std::cout << tmp->getType() << " has " << tmp->getXP() << "XP" << std::endl;
	moi->equip(tmp);
	moi->use(3, *bob);


	delete bob;
	delete moi;
	delete src;
	return 0;
}