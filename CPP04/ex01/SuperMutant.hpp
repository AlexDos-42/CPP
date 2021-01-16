#ifndef SUPERMUTANT
# define SUPERMUTANT

# include <iostream>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
	SuperMutant();
	SuperMutant(const SuperMutant &ref);
	virtual ~SuperMutant();
	
	SuperMutant	&operator=(const SuperMutant&);
	virtual void	takeDamage(int dmg);
};

#endif