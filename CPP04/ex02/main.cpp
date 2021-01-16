#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int	main(void)
{
	ISpaceMarine	*bob = new TacticalMarine;
	ISpaceMarine	*jim = new AssaultTerminator;

	ISquad		*vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); i++)
	{
		ISpaceMarine	*cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << std::endl;

	ISquad		*sq1(vlc);
	for (int i = 0; i < vlc->getCount(); i++)
	{
		ISpaceMarine	*cur2 = sq1->getUnit(i);
		cur2->battleCry();
		cur2->rangedAttack();
		cur2->meleeAttack();
	}
	delete vlc;

	return (0);
}