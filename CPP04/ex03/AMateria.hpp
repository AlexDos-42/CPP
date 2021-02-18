#ifndef AMATERIA
# define AMATERIA

# include <iostream>
# include "ICharacter.hpp"
class ICharacter;

class AMateria
{
	private:
		unsigned int _xp;
		std::string m_type;
		
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &copy);
		AMateria &operator=(const AMateria&);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif