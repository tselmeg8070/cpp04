#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat: " << "Constructor called" << std::endl;
}

Cat::Cat(Cat &t) : Animal(t.type)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat: " << type << " is destroyed" << std::endl;
}

Cat& Cat::operator=(const Cat& t)
{
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	type = t.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat: Moew !!" << std::endl;
}
