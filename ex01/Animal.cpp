#include "Animal.hpp"

Animal::Animal(void) : _type("Achille")

{
	std::cout << "Achille (animal type) constructed by default!" << std::endl;
}

Animal::Animal(const std::string& type) : _type(type)

{
	std::cout << _type << " constructed!" << std::endl;
}

Animal::Animal(const Animal& copy) : _type(copy._type)

{
	std::cout << _type << " copy constructed!" << std::endl;
}

Animal& Animal::operator=(const Animal& copy)

{
	if (this != &copy)
		_type = copy._type;
	std::cout << _type << " assigned!" << std::endl;
	return (*this);
}

Animal::~Animal(void)

{
	std::cout << _type << " destructed!" << std::endl;
}

void	Animal::makeSound(void) const

{
	std::cout << "feur allez hop!" << std::endl;
}

std::string	Animal::getType(void) const { return (_type); }
