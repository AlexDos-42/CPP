#ifndef RADSCORPION
# define RADSCORPION

# include <iostream>
# include "Enemy.hpp"

class RadScorpion: public Enemy
{
	public:
	RadScorpion();
	RadScorpion(const RadScorpion &ref);
	virtual ~RadScorpion();
	
	RadScorpion	&operator=(const RadScorpion&);
};

#endif