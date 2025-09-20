#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(const std::string& type) : _type(type)

{
	std::cout << _type << " constructed!" << std::endl;
}

WrongAnimal::WrongAnimal(void) : _type("Achille")

{
	std::cout << "Achille (animal type) constructed!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) : _type(copy._type)

{
	std::cout << _type << " copy constructed!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)

{
	if (this != &copy)
		_type = copy._type;
	std::cout << _type << " assigned!" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)

{
	std::cout << _type << " destructed!" << std::endl;
}

void	WrongAnimal::makeSound(void) const

{
	std::cout << "feur allez hop!" << std::endl;
}

std::string	WrongAnimal::getType(void) const { return (_type); }
