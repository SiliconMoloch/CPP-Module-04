#include "Ice.hpp"

Ice::Ice(void)

{

}

Ice::Ice(const Cure& copy)

{
	(void)copy;
	return (*this);
}

Ice& Ice::operator=(const Cure& copy)

{
	(void)copy;
	return (*this);
}

Ice::~Ice(void)

{

}

/*Ice* Ice::clone(void)

{
	return (new(Ice));
}*/
