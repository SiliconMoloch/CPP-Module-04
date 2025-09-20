#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
private:
	std::string	ideas[100];
public:
	Brain(void);
	Brain(const Brain& copy);
	Brain& operator=(const Brain& copy);
	~Brain(void);
	void		setIdea(short index, const std::string& idea);
	std::string getIdea(short index);
};

#endif
