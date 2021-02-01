#ifndef CURE
# define CURE

# include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure();
        Cure(const Cure &copy);
        virtual ~Cure();

        Cure		&operator=(const Cure&);

        virtual AMateria    *clone() const;
        virtual void        use(ICharacter &target);
};

#endif