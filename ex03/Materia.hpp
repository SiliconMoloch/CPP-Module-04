#ifndef MATERIA_HPP
#define MATERIA_HPP

#include "AMateria.hpp"
#include <iostream>

class ICharacter;

class Materia : public AMateria

{
	public:
		Materia(void);
		Materia(std::string const& type);
		Materia(const Materia& copy);
		Materia& operator=(const Materia& copy);
		~Materia(void);

		//virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter& target);
};

#endif
