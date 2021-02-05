#ifndef CHILD
# define CHILD

# include <iostream>
# include "Victim.hpp"

class Child: public Victim
{
	public:
		Child();
		Child(std::string const name);
		Child(const Child &ref);
		virtual ~Child();

		Child		&operator=(const Child&);

		void		getPolymorphed(void) const;
};

#endif