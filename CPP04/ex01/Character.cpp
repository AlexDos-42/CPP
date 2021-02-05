#include "Character.hpp"

Character::Character(): m_name("NoName"), m_ap(0), m_weapon(0) {}

Character::Character(std::string const &name): m_name(name), m_ap(40), m_weapon(0) {}

Character::Character(const Character &ref)
{
	*this = ref;
}

Character::~Character()
{
    std::cout << m_name << " is gone." << std::endl;
}

Character	&Character::operator=(const Character &ref)
{
	m_name = ref.m_name;
	m_ap = ref.m_ap;
	m_weapon = ref.m_weapon;
	return *this;
}

std::string	Character::getName() const
{
	return m_name;
}

int		Character::getAP() const
{
	return m_ap;
}

AWeapon		*Character::getWeapon() const
{
    if (m_weapon)
		return m_weapon;
	return NULL;
}

void		Character::recoverAP()
{
	m_ap = m_ap + 10;
	if (m_ap > 40)
		m_ap = 40;
}

void		Character::equip(AWeapon *weapon)
{
    if (weapon == m_weapon)
		std::cout << weapon->getName() << " is already in his hands." << std::endl;
	m_weapon = weapon;
}

void		Character::attack(Enemy *enemy)
{
    if (!m_weapon)
		std::cout << "No weapon equipped!" << std::endl;
	else if (m_ap < m_weapon->getApCost())
		std::cout << "Not enough energie to attack!" << std::endl;
	else if (!enemy)
		std::cout << "This enemy is dead !" << std::endl;
	else
	{
		std::cout << m_name << " attacks " << enemy->getType() << " with a " << m_weapon->getName() << std::endl;
		m_weapon->attack();
		enemy->takeDamage(m_weapon->getDamage());
		//std::cout << enemy->getType() << " has " << enemy->getHp() << " HP " << std::endl;
		m_ap -= m_weapon->getApCost();
		if (m_ap < 0)
			m_ap = 0;
		if (enemy->getHp() <= 0)
			delete enemy;
	}
}

std::ostream	&operator<<(std::ostream &output, const Character &character)
{
	if (character.getWeapon())
		output << character.getName() << " has " << character.getAP() << " AP and carries a " << character.getWeapon()->getName() << std::endl;
	else
		output << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
	return (output);
}
