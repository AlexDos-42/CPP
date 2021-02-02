#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{}

Cure::Cure(const Cure &copy): AMateria("cure")
{
	(void)copy;
}

Cure::~Cure()
{}

AMateria	*Cure::clone() const
{
	Cure *copy = new Cure(*this);
	return (copy);
}

void		Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}