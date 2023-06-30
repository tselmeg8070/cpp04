#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal: " << "Constructor called" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal &t)
{
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	type = t.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: " << type << " is destroyed" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& t)
{
	std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
	this->type = t.type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::setType(std::string value)
{
	type = value;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal: WrongAnimalish sound !!" << std::endl;
}
