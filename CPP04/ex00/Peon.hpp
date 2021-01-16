#ifndef PEON
# define PEON

# include <iostream>
# include "Victim.hpp"

class Peon: public Victim
{
	public:
	Peon(std::string const name);
	Peon(const Peon &ref);
	~Peon();

	Peon		&operator=(const Peon&);

	void		getPolymorphed(void) const;
};

#endif