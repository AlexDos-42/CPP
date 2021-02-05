#ifndef FLOWERPOWER
# define FLOWERPOWER

# include <iostream>
# include "AWeapon.hpp"

class FlowerPower: public AWeapon
{
	public:
		FlowerPower();
		FlowerPower(const FlowerPower &ref);
		virtual ~FlowerPower();

		FlowerPower	    &operator=(const FlowerPower&);
		virtual void	attack() const;
};

#endif