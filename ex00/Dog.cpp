#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")

{
	std::cout << _type << " constructed by default!" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)

{
	std::cout << _type << " copy constructed!" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)

{
	if (this != &copy)
	{
		Animal::operator=(copy);
		_type = copy._type;
	}
	std::cout << _type << " assigned!" << std::endl;
	return (*this);
}

Dog::~Dog(void)

{
	std::cout << _type << " destructed!" << std::endl;
}

void	Dog::makeSound(void) const

{
	std::cout << "Woof!" << std::endl;
}
