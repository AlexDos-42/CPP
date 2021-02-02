#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): m_nb(0)
{
	for (int i = 0; i < 4; i++)
		m_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy): m_nb(copy.m_nb)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy.m_materia[i])
			this->m_materia[i] = copy.m_materia[i]->clone();
		else
			this->m_materia[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete m_materia[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
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

void		MateriaSource::learnMateria(AMateria *m)
{
	if (m_nb < 4 && m)
	{
		for (int i = 0; i < m_nb; i++)
		{
			if (m_materia[i] == m)
				return ;
		}
		m_materia[m_nb] = m;
		m_nb++;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (m_materia[i] && m_materia[i]->getType() == type)
		{
			AMateria *ret = m_materia[i]->clone();
			return (ret);
		}
	}
	return (NULL);
}