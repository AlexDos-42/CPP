#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for action!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &ref)
{
	(void)ref;
	std::cout << "Tactical Marine ready for action!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine		&TacticalMarine::operator=(const TacticalMarine &ref)
{
	(void)ref;
	return *this;
}

ISpaceMarine	*TacticalMarine::clone() const
{
	TacticalMarine	*clone = new TacticalMarine(*this);
	return clone;
}

void		TacticalMarine::battleCry() const
{
	std::cout << "For the Holy PLOT!" << std::endl;
}

void		TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void		TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}