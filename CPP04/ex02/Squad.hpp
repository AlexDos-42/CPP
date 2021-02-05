#ifndef SQUAD
# define SQUAD

# include <iostream>
# include "ISquad.hpp"

class Squad: public ISquad
{
	public:
		Squad();
		Squad(const Squad &ref);
		virtual ~Squad();

		Squad		            &operator=(const Squad&);
		virtual int		        getCount() const;
		virtual ISpaceMarine	*getUnit(int unit) const;
		virtual int		        push(ISpaceMarine *unit);

	private:
		int		        m_count;
		ISpaceMarine	**m_unit;
};

#endif