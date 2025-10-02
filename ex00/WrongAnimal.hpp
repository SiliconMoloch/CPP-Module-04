#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
protected:
	std::string _type;
public:
	WrongAnimal(void);
	WrongAnimal(const std::string& type);
	WrongAnimal(const WrongAnimal& copy);
	WrongAnimal& operator=(const WrongAnimal& copy);
	virtual ~WrongAnimal();

	void		makeSound(void) const;
	std::string	getType(void) const;
};

#endif
