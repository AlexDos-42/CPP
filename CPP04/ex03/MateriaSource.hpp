#ifndef MATERIASOURCE
# define MATERIASOURCE

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	virtual ~MateriaSource();

	MateriaSource	&operator=(const MateriaSource&);

	virtual void		learnMateria(AMateria *m);
	virtual AMateria	*createMateria(std::string const &type);

	private:
	AMateria	*m_materia[4];
	int		    m_nb;
};

#endif