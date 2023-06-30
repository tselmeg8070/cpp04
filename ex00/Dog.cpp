#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog: " << "Constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog &t) : Animal()
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	type = t.type;
}

Dog::~Dog()
{
	std::cout << "Dog: " << type << " is destroyed" << std::endl;
}

Dog& Dog::operator=(const Dog& t)
{
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	this->type = t.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog: Bark !!" << std::endl;
}
