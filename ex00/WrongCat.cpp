#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat: " << "Constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat &t) : WrongAnimal(t.type)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: " << type << " is destroyed" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& t)
{
	std::cout << "WrongCat: Copy assignment operator called" << std::endl;
	this->type = t.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat: Beewr !!" << std::endl;
}
