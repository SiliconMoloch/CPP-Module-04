#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure")

{

}

Cure::Cure(Cure const &other) : AMateria(other._type)

{

}

Cure& 	Cure::operator=(Cure const&)

{
	return (*this);
}

Cure::~Cure(void)

{

}

void	Cure::use(ICharacter& target)

{
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}

AMateria*	Cure::clone(void) const

{
	return (new Cure(*this));
}
