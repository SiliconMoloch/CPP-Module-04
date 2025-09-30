#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria

{
	public:
		Cure(void);
		Cure(Cure const& other);
		Cure& operator=(Cure const&);
		virtual ~Cure(void);

		virtual AMateria* clone(void) const;
		virtual void use(ICharacter& target);
};

#endif
