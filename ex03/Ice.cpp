#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::~Ice()
{}

Ice::Ice(Ice &t) : AMateria(t.type)
{}

Ice& Ice::operator=(const Ice& t)
{
	if (this != &t)
		type = t.type;
	return (*this);
}

AMateria*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "
		<< target.getName()
		<< " *" << std::endl;
}
