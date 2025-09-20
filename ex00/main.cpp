#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)

{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* im_tired = new WrongAnimal();
	const WrongAnimal* im_bleeding = new WrongCat();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete (meta);
	delete (i);
	delete (j);

	std::cout << std::endl << "Wrong tests now /////" << std::endl;
	std::cout << im_tired->getType() << " " << std::endl;
	std::cout << im_bleeding->getType() << " " << std::endl;
	im_tired->makeSound();
	im_bleeding->makeSound();

	delete (im_tired);
	delete (im_bleeding);
	return (0);
}
