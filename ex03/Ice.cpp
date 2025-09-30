#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice(void) : AMateria("ice")

{

}

Ice::Ice(Ice const &other) : AMateria(other._type)

{

}

Ice& 	Ice::operator=(Ice const&)

{
	return (*this);
}

Ice::~Ice(void)

{

}

void	Ice::use(ICharacter& target)

{
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}

AMateria*	Ice::clone(void) const

{
	return (new Ice(*this));
}
