#ifndef ASSAULTTERMINATOR
# define ASSAULTTERMINATOR

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &ref);
		virtual ~AssaultTerminator();

		AssaultTerminator	    &operator=(const AssaultTerminator&);
		virtual ISpaceMarine	*clone() const;
		virtual void		    battleCry() const;
		virtual void		    rangedAttack() const;
		virtual void		    meleeAttack() const;
};

#endif