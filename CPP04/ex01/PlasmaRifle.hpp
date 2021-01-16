#ifndef PLASMARIFLE
# define PLASMARIFLE

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &ref);
	virtual ~PlasmaRifle();

	PlasmaRifle	    &operator=(const PlasmaRifle&);
	virtual void	attack() const;
};

#endif