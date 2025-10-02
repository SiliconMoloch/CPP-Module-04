#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")

{
	std::cout << _type << " constructed by default!" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)

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
