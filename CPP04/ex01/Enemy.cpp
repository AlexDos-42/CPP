#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type): m_hp(hp), m_type(type){}

Enemy::Enemy(const Enemy &copy)
{
	*this = copy;
}

Enemy::~Enemy(){}

Enemy			&Enemy::operator=(Enemy const &ref)
{
	m_hp = ref.m_hp;
	m_type = ref.m_type;
	return *this;
}

int				Enemy::getHp() const
{
	return m_hp;
}

std::string		Enemy::getType() const
{
	return m_type;
}

void			Enemy::takeDamage(int dmg)
{
	if (dmg >= 0){
		if (m_hp < dmg)
			m_hp = 0;
		else
			m_hp -= dmg;
	}
}