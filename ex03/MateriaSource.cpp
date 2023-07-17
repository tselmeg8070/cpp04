#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < RECIPES_SIZE; i++)
		recipes[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource &t)
{
	for (int i = 0; i < RECIPES_SIZE; i++)
		if (t.recipes[i])
			recipes[i] = t.recipes[i]->clone();
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < RECIPES_SIZE; i++)
		if (recipes[i])
			delete recipes[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &t)
{
	if (this != &t)
	{
		for (int i = 0; i < RECIPES_SIZE; i++)
			if (recipes[i])
			{
				delete recipes[i];
				recipes[i] = 0;
			}
		for (int i = 0; i < RECIPES_SIZE; i++)
			if (t.recipes[i])
				recipes[i] = t.recipes[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	bool flag = false;

	for (int i = 0; m && i < RECIPES_SIZE; i++)
	{
		if (!recipes[i])
		{
			recipes[i] = m;
			flag = true;
			break ;
		}
	}
	if (!m)
		std::cout << "No material found!" << std::endl;
	else if (!flag)
		std::cout << "Recipes are full!" << std::endl;
	else
		std::cout << "Learned " << m->getType() << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < RECIPES_SIZE; i++)
	{
		if (recipes[i] && recipes[i]->getType() == type)
			return (recipes[i]->clone());
	}
	return (0);
}
