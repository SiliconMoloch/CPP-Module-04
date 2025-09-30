#include "Character.hpp"

Character::Character(void)

{
	_name = "<Unknown>";
}

Character::Character(const std::string &name)

{
	_name = name;
}

Character::Character(const Character &copy)

{
	(void)copy;
}

Character& Character::operator=(const Character& copy)

{
	(void)copy;
	return (*this);
}

Character::~Character(void)

{

}
