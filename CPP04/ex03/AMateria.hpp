#ifndef AMATERIA
# define AMATERIA

# include <iostream>

class AMateria
{
    private:
        std::string const m_type;
        unsigned int _xp;

    public:
        AMateria(std::string const & type);
        AMateria(const AMateria &copy);
        AWeapon	&operator=(const AWeapon)
        virtual ~AMateria();

        std::string const & getType() const; //Returns the materia type
        unsigned int getXP() const; //Returns the Materia's XP

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif