#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class AMateria

{
	protected:
		std::string			_type;
	public:
		//virtual AMateria*	clone(void) const = 0;
		AMateria(std::string const& type);
		std::string const&	getType(void) const;
		virtual void		use(ICharacter& target);
		virtual AMateria*	clone(void);
};

#endif
