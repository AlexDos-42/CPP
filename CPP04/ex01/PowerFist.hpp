#ifndef POWERFIST
# define POWERFIST

# include <iostream>
# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
	PowerFist();
	PowerFist(const PowerFist &ref);
	virtual ~PowerFist();

	PowerFist		&operator=(const PowerFist&);
	virtual void	attack() const;
};

#endif