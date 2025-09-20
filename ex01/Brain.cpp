#include "Brain.hpp"

Brain::Brain(void)

{
	std::cout << "Brain constructed!" << std::endl;
}

Brain::Brain(const Brain& copy)

{
	for (short i = 0; i < 100; ++i)
		ideas[i] = copy.ideas[i];
	std::cout << "Brain copy constructed!" << std::endl;
}

Brain& Brain::operator=(const Brain& copy)

{
	for (short i = 0; i < 100; ++i)
		ideas[i] = copy.ideas[i];
	std::cout << "Brain assigned!" << std::endl;
	return (*this);
}

Brain::~Brain(void) 

{
	std::cout << "Brain destructed!" << std::endl;
}

void	Brain::setIdea(short index, const std::string& idea)

{
	if (index < 0 || index > 99)
		return ;
	ideas[index] = idea;
}

std::string Brain::getIdea(short index)

{
	return (index >= 0 && index <= 99 ? ideas[index] : "...");
}
