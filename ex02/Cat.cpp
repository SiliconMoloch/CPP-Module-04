#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")

{
	brain = new Brain();
	std::cout << _type << " constructed!" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)

{
	brain = new Brain(*copy.brain);
	std::cout << _type << " copy constructed!" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)

{
	if (this != &copy)
	{
		Animal::operator=(copy);
		_type = copy._type;
		delete (brain);
		brain = new Brain(*copy.brain);
	}
	std::cout << _type << " assigned!" << std::endl;
	return (*this);
}

Cat::~Cat(void)

{
	delete (brain);
	std::cout << _type << " destructed!" << std::endl;
}

void	Cat::makeSound(void) const

{
	std::cout << "Meow!" << std::endl;
}

Brain*	Cat::getBrain(void) { return (brain); }
