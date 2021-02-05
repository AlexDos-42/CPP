#ifndef VICTIM
# define VICTIM

# include <iostream>

class Victim
{
	public:
		Victim();
		Victim(std::string const name);
		Victim(const Victim &ref);
		virtual ~Victim();

		Victim			&operator=(const Victim&);
		std::string		getName(void) const;
		virtual void	getPolymorphed(void) const;

	private:
	std::string	m_name;
};

std::ostream		&operator<<(std::ostream &ost, const Victim &victim);

#endif