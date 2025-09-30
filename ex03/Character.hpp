#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Materia.hpp"

class AMateria;

class Character : public ICharacter

{
	public:
		Character(void);
		Character(const std::string& name);
		Character(const Character& copy);
		Character& operator=(const Character &copy);
		~Character(void);
		
		virtual std::string const& getName(void) const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
	private:
		std::string	_name;
		Materia	_inventory[4];
};

#endif
