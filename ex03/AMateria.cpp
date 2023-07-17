#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{}

AMateria::~AMateria()
{}

AMateria::AMateria() : type("")
{}

AMateria::AMateria(AMateria &t) : type(t.type)
{}

AMateria& AMateria::operator=(AMateria const &t)
{
	if (this != &t)
		type = t.type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "Throwing raw material at " << target.getName() << std::endl;
}
