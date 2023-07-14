#include "Dog.hpp"
#include <string>

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
	std::cout << "Dog: " << "Constructor called" << std::endl;
}

Dog::Dog(Dog &t) : Animal("Dog"), brain(new Brain((*t.getBrain())))
{
	std::cout << "Dog: Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog: " << type << " is destroyed" << std::endl;
}

Dog& Dog::operator=(const Dog& t)
{
	std::cout << "Dog: Copy assignment operator called" << std::endl;
	if (&t != this)
	{
		type = t.type;
		if (brain)
			delete brain;
		brain = new Brain((*t.getBrain()));
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog: Bark !!" << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return (brain);
}

void	Dog::setIdeas(const std::string &idea)
{
	for (int i = 0; i < 100; i++)
		brain->setIdea(i, idea);
}
