#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal: " << "Constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : type(type)
{
	std::cout << "Animal: " << "Constructor called" << std::endl;
}

Animal::Animal(Animal &t) : type(t.type)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal: " << type << " is destroyed" << std::endl;
}

Animal& Animal::operator=(const Animal& t)
{
	std::cout << "Animal: Copy assignment operator called" << std::endl;
	type = t.type;
	return (*this);
}

const std::string	&Animal::getType() const
{
	return (type);
}

void Animal::setType(const std::string &value)
{
	type = value;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal: animalish sound !!" << std::endl;
}
