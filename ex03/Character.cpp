#include "Character.hpp"

Character::Character(void) : _name("<Unknown>"), _stashSize(0)

{
	for (short i = 0; i < 4; ++i)
		_inventory[i] = 0;
	for (short i = 0; i < 64; ++i)
		_stash[i] = 0;
}

Character::Character(const std::string &name) : _name(name), _stashSize(0)

{
	for (short i = 0; i < 4; ++i)
		_inventory[i] = 0;
	for (short i = 0; i < 64; ++i)
		_stash[i] = 0;
}

Character::Character(const Character &other) : _name(other._name), _stashSize(0)

{
	for (short i = 0; i < 4; ++i)
		_inventory[i] = other._inventory[i] ? other._inventory[i]->clone() : 0;
	for (short i = 0; i < 64; ++i)
		_stash[i] = 0;
}

Character& Character::operator=(const Character& other)

{
	if (this != &other)
	{
		_name = other._name;
		clearInventory();
		for (short i = 0; i < 4; ++i)
			_inventory[i] = other._inventory[i] ? other._inventory[i]->clone() : 0;
	}
	return (*this);
}

Character::~Character(void)

{
	clearInventory();
}

std::string const& Character::getName(void) const

{
	return (_name);
}

void Character::equip(AMateria* m)

{
	if (!m)
		return ;
	for (short i = 0; i < 4; ++i)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)

{
	if (idx >= 0 && idx < 4 && _inventory[idx])
	{
		_stash[_stashSize++] = _inventory[idx];
		_inventory[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target)

{
	if (idx < 0 || idx >= 4 || !_inventory[idx])
		return ;
	_inventory[idx]->use(target);
}

void Character::clearInventory(void)

{
	for (short i = 0; i < 4; ++i)
		delete (_inventory[i]);
	for (short i = 0; i < _stashSize; ++i)
		delete (_stash[i]);
}
