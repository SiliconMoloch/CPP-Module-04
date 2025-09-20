#include "Cat.hpp"

Cat::Cat(const std::string& type) : Animal(type)

{
	std::cout << _type << " constructed!" << std::endl;
}

Cat::Cat(const Animal& copy) : Animal(copy)

{
	std::cout << _type << " copy constructed!" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)

{
	if (this != &copy)
	{
		Animal::operator=(copy);
		_type = copy._type;
	}
	std::cout << _type << " assigned!" << std::endl;
	return (*this);
}

Cat::~Cat(void)

{
	std::cout << _type << " destructed!" << std::endl;
}

void	Cat::makeSound(void) const

{
	std::cout << "Meow!" << std::endl;
}
