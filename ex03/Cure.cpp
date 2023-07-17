#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::~Cure()
{}

Cure::Cure(Cure &t) : AMateria(t.type)
{}

Cure& Cure::operator=(const Cure& t)
{
	if (this != &t)
		type = t.type;
	return (*this);
}

AMateria*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals "
		<< target.getName()
		<< "'s wounds *" << std::endl;
}
