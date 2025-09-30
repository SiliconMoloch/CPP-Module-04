#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

class MateriaSource : public IMateriaSource

{
	public:
		virtual 			~MateriaSource(void) {}
		virtual void		learnMateria(AMateria*);
		virtual AMateria*	createMateria(std::string const& type);
};

#endif