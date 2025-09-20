#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)

{
	Animal	*array[100];

	for (short i = 0; i < 100; ++i)
	{
		array[i] = new Cat();
		array[++i] = new Dog();
	}
	for (short i = 0; i < 100; ++i)
		delete (array[i]);

	std::cout << "Above, tests for the sized-100 array ////\n\n\n" << std::endl;

	Dog original_dog;
	original_dog.getBrain()->setIdea(0, "\033[1;31mChase the ball\033[0m");
	Dog copy_dog = original_dog;
	copy_dog.getBrain()->setIdea(0, "\033[1;31mThrow up on the floor and eat it again\033[0m");
	std::cout << original_dog.getBrain()->getIdea(0) << std::endl;
	std::cout << copy_dog.getBrain()->getIdea(0) << std::endl;

	Dog assigned_dog;
	assigned_dog = original_dog;
	assigned_dog.getBrain()->setIdea(0, "\033[1;31mSleep all day\033[0m");
	std::cout << original_dog.getBrain()->getIdea(0) << std::endl;
}
