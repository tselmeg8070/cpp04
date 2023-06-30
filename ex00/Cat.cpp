#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat: " << "Constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(Cat &t) : Animal()
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	type = t.type;
}

Cat::~Cat()
{
	std::cout << "Cat: " << type << " is destroyed" << std::endl;
}

Cat& Cat::operator=(const Cat& t)
{
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	this->type = t.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat: Moew !!" << std::endl;
}
