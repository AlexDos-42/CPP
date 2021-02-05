#ifndef CHARACTER
# define CHARACTER

# include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
                Character();
                Character(std::string const &name);
                Character(const Character &copy);
                virtual ~Character();
                Character	                &operator=(const Character&);

                virtual std::string const	&getName() const;
                virtual void			    equip(AMateria *m);
                virtual void			    unequip(int idx);
                virtual void			    use(int idx, ICharacter &target);

	private:
                std::string	m_name;
                AMateria	*m_materia[4];
                int             m_nb;
};

#endif