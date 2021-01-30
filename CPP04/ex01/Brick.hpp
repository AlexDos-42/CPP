#ifndef BRICK
# define BRICK

# include <iostream>
# include "Enemy.hpp"

class Brick: public Enemy
{
	public:
	Brick();
	Brick(const Brick &ref);
	virtual ~Brick();
	
	Brick	&operator=(const Brick&);
	virtual void	takeDamage(int dmg);
};

#endif