#include "Character.hpp"

Character::Character(): m_name("NoName"), m_nb(0)
{
	for (int i = 0; i < 4; i++)
		m_materia[i] = NULL;
}

Character::Character(std::string const &name): m_name(name), m_nb(0)
{
	for (int i = 0; i < 4; i++)
		m_materia[i] = NULL;
}

Character::Character(const Character &copy): m_name(copy.m_name), m_nb(copy.m_nb)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy.m_materia[i])
			this->m_materia[i] = copy.m_materia[i]->clone();
		else
			this->m_materia[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete m_materia[i];
}

Character		&Character::operator=(const Character &copy)
{
	this->m_name = copy.m_name;
	this->m_nb = copy.m_nb;
	for (int i = 0; i < 4; i++)
	{
		if (copy.m_materia[i])
			this->m_materia[i] = copy.m_materia[i]->clone();
		else
			this->m_materia[i] = NULL;
	}
	return (*this);
}

std::string const	&Character::getName() const
{
	return (m_name);
}

void			Character::equip(AMateria *m)
{
	if (m_nb < 4 && m)
	{
		m_materia[m_nb] = m;
		m_nb++;
	}
}

void			Character::unequip(int idx)
{
	if (idx >= 0 && idx < m_nb && m_materia[idx])
	{
		for (int i = idx; i < 3; i++)
		{
			m_materia[i] = m_materia[i + 1];
			m_materia[i + 1] = NULL;
		}
		m_nb--;
	}
}

void			Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < m_nb && m_materia[idx])
		m_materia[idx]->use(target);
}