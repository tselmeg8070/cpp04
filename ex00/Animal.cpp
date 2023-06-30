#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal: " << "Constructor called" << std::endl;
	type = "Animal";
}

Animal::Animal(Animal &t)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	type = t.type;
}

Animal::~Animal()
{
	std::cout << "Animal: " << type << " is destroyed" << std::endl;
}

Animal& Animal::operator=(const Animal& t)
{
	std::cout << "Animal: Copy assignment operator called" << std::endl;
	this->type = t.type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (type);
}

void Animal::setType(std::string value)
{
	type = value;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal: animalish sound !!" << std::endl;
}
