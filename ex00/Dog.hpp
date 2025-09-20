#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog(const std::string& type = "Dog");
	Dog(const Dog& copy);
	Dog& operator=(const Dog& copy);
	~Dog(void);

	void	makeSound(void) const;
};

#endif
