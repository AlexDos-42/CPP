#ifndef ICE
# define ICE

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
        Ice();
        Ice(const Ice &copy);
        virtual ~Ice();

        virtual AMateria	*clone() const;
        virtual void		use(ICharacter &target);
};

#endif