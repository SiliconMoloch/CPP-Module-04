#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Cat")

{
	std::cout << _type << " constructed by default!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)

{
	std::cout << _type << " copy constructed!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)

{
	if (this != &copy)
	{
		WrongAnimal::operator=(copy);
		_type = copy._type;
	}
	std::cout << _type << " assigned!" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void)

{
	std::cout << _type << " destructed!" << std::endl;
}

void	WrongCat::makeSound(void) const

{
	std::cout << "Meow!" << std::endl;
}
