#ifndef PEON
# define PEON

# include <iostream>
# include "Victim.hpp"

class Peon: public Victim
{
	public:
		Peon();
		Peon(std::string const name);
		Peon(const Peon &ref);
		virtual ~Peon();

		Peon		&operator=(const Peon&);

		void		getPolymorphed(void) const;
};

#endif