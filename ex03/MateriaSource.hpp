#ifndef MATERIA_SOURCE
#define MATERIA_SOURCE
#define RECIPES_SIZE 4
#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* recipes[RECIPES_SIZE];
public:
	MateriaSource();
	MateriaSource(MateriaSource& t);
	~MateriaSource();
	MateriaSource& operator=(const MateriaSource& t);
	void	learnMateria(AMateria *m);
	AMateria* createMateria(std::string const &type);
};

#endif
