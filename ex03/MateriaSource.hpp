#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource

{
	private:
		AMateria* 			_models[4];
	public:
							MateriaSource(void);
							MateriaSource(MateriaSource const& other);
							MateriaSource& operator=(MateriaSource const& other);
		virtual 			~MateriaSource(void);
		virtual void		learnMateria(AMateria*);
		virtual AMateria*	createMateria(std::string const& type);
};

#endif
