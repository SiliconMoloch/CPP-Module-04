#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)

{
	for (short i = 0; i < 4; ++i)
		_models[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const& other)

{
	for (short i = 0; i < 4; ++i)
		_models[i] = other._models[i] ? other._models[i]->clone() : 0;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& other)

{
	if (this != &other)
	{
		for (short i = 0; i < 4; ++i)
		{
			delete (_models[i]);
			_models[i] = other._models[i] ? other._models[i]->clone() : 0;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)

{
	for (short i = 0; i < 4; ++i)
		delete (_models[i]);
}

void	MateriaSource::learnMateria(AMateria *m)

{
	if (!m)
		return ;
	for (short i = 0; i < 4; ++i)
	{
		if (!_models[i])
		{
			_models[i] = m->clone();
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)

{
	for (short i = 0; i < 4; ++i)
	{
		if (_models[i] && _models[i]->getType() == type)
			return (_models[i]->clone());
	}
	return (0);
}
