#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
class ICharacter;

class AMateria

{
	protected:
		std::string			_type;
	public:
		AMateria(std::string const& type);
		virtual ~AMateria(void);
		std::string const&	getType(void) const;
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
};

#endif
