#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal: " << "Constructor called" << std::endl;
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
