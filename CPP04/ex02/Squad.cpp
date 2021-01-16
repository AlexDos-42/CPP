#include "Squad.hpp"

Squad::Squad(): m_count(0), m_unit(NULL) {}

Squad::Squad(Squad const &ref)
{
	*this = ref;
}

Squad::~Squad()
{
	if (m_unit)
	{
		for (int i = 0; i < m_count; i++)
			delete m_unit[i];
		delete[] m_unit;
	}
}

Squad		&Squad::operator=(const Squad &ref)
{
    m_count = ref.m_count;
	for (int i = 0; i < m_count; i++)
		delete m_unit[i];
	delete[] m_unit;
	m_unit = new ISpaceMarine*[m_count];
	for (int i = 0; i < m_count; i++)
		m_unit[i] = ref.m_unit[i]->clone();
	return *this;
}

int		Squad::getCount() const
{
	return m_count;
}

ISpaceMarine	*Squad::getUnit(int unit) const
{
	if (m_count > 0 && unit < m_count && unit >= 0)
		return m_unit[unit];
	return NULL;
}

int		Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return 1;
	if (!m_unit)
	{
		m_unit = new ISpaceMarine*[1];
		m_unit[0] = unit;
		m_count = 1;
	}
	else
	{
		for (int i = 0; i < m_count; i++)
		{
			if (m_unit[i] == unit)
				return 1;
		}
		ISpaceMarine **tmp = new ISpaceMarine*[m_count + 1];
		for (int i = 0; i < m_count; i++)
			tmp[i] = m_unit[i];
		delete[] m_unit;
		tmp[m_count] = unit;
		m_unit = tmp;
		m_count++;
	}
	return 0;
}