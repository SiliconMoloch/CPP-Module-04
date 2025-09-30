#ifndef CURE_HPP
#define CURE _HPP

#include "AMateria.hpp"

class Cure : public AMateria

{
	public:
		Cure(void);
		Cure(const Cure& copy);
		Cure& operator=(const Cure& copy);
		~Cure(void);
		//Cure* clone(void);
	private:
};

#endif
