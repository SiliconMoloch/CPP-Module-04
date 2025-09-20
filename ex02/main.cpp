#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)

{
	Animal	*meow = new Cat();
	meow->makeSound();
	delete (meow);
	std::cout << "And now just remove the star for compilation error!" << std::endl;
}
