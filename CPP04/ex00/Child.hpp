#ifndef CHILD
# define CHILD

# include <iostream>
# include "Victim.hpp"

class Child: public Victim
{
	public:
	Child(std::string const name);
	Child(const Child &ref);
	~Child();

	Child		&operator=(const Child&);

	void		getPolymorphed(void) const;
};

#endif