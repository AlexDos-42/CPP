#ifndef SORCERER
# define SORCERER

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public:
	Sorcerer(std::string const name, std::string const title);
	Sorcerer(const Sorcerer &ref);
	~Sorcerer();

	Sorcerer	&operator=(const Sorcerer&);
	std::string	getName(void) const;
	std::string	getTitle(void) const;
	void		polymorph(const Victim&) const;

	private:
	std::string	m_name;
	std::string	m_title;
};

std::ostream	&operator<<(std::ostream &ost, const Sorcerer &sorcerer);

#endif