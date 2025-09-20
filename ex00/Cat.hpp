#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat(const std::string &type = "Cat");
	Cat(const Animal& copy);
	Cat& operator=(const Cat& copy);
	~Cat(void);

	void	makeSound(void) const;
};

#endif
