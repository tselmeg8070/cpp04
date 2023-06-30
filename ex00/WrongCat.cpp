#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat: " << "Constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &t) : WrongAnimal()
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	type = t.type;
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
