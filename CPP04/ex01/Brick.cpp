#include "Brick.hpp"

Brick::Brick(): Enemy(999, "Brick")
{
	std::cout << "I'm invincible" << std::endl;
}

Brick::Brick(const Brick &ref): Enemy(ref)
{
	std::cout << "I'm invincible" << std::endl;
}

Brick::~Brick()
{
	std::cout << "No way, i can't d..." << std::endl;
}

Brick		&Brick::operator=(const Brick &ref)
{
	Enemy::operator=(ref);
	return *this;
}

void		Brick::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg - 1000);
}