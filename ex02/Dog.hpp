#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain*	brain;
public:
	Dog(const std::string& type = "Dog");
	Dog(const Dog& copy);
	Dog& operator=(const Dog& copy);
	~Dog(void);

	void	makeSound(void) const;
	Brain* getBrain(void);
};

#endif
