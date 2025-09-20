#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat(const std::string &type = "Cat");
	WrongCat(const WrongAnimal& copy);
	WrongCat& operator=(const WrongCat& copy);
	~WrongCat(void);

	void	makeSound(void) const;
};

#endif
