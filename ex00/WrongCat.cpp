#include "WrongCat.hpp"

WrongCat::WrongCat(const std::string& type) : WrongAnimal(type)

{
	std::cout << _type << " constructed!" << std::endl;
}

WrongCat::WrongCat(const WrongAnimal& copy) : WrongAnimal(copy)

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
