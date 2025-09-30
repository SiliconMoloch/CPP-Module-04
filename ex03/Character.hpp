#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class AMateria;

class Character : public ICharacter

{
	private:
		std::string	_name;
		AMateria*	_inventory[4];
		AMateria*	_stash[64];
		short		_stashSize;
	public:
		Character(void);
		Character(const std::string& name);
		Character(const Character& copy);
		Character& operator=(const Character &copy);
		virtual ~Character(void);
		
		virtual std::string const& 	getName(void) const;
		virtual void 				equip(AMateria* m);
		virtual void 				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
		void						clearInventory(void);
		void						copyInventory(Character const& other);
};

#endif
