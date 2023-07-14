#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog: " << "Constructor called" << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type)
{
	std::cout << "Dog: " << "Constructor called" << std::endl;
}

Dog::Dog(Dog &t) : Animal(t.type)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog: " << type << " is destroyed" << std::endl;
}

Dog& Dog::operator=(const Dog& t)
{
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	type = t.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog: Bark !!" << std::endl;
}
