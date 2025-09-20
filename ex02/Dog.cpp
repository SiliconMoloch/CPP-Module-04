#include "Dog.hpp"

Dog::Dog(const std::string& type) : Animal(type)

{
	brain = new Brain();
	std::cout << _type << " constructed!" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)

{
	brain = new Brain(*copy.brain);
	std::cout << _type << " copy constructed!" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)

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

Dog::~Dog(void)

{
	delete (brain);
	std::cout << _type << " destructed!" << std::endl;
}

void	Dog::makeSound(void) const

{
	std::cout << "Woof!" << std::endl;
}

Brain* Dog::getBrain(void) { return (brain); }
