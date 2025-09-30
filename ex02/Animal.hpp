#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
protected:
	std::string _type;
public:
	Animal(void);
	Animal(const std::string& type);
	Animal(const Animal& copy);
	Animal& operator=(const Animal& copy);
	virtual ~Animal();

	std::string		getType(void) const;


	
	virtual void	makeSound(void) const = 0;
};

#endif
