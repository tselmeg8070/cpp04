#include "Cat.hpp"
#include <string>

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	std::cout << "Cat: " << "Constructor called" << std::endl;
}

Cat::Cat(Cat &t) : Animal(t.type), brain(new Brain((*t.getBrain())))
{
	std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat: " << type << " is destroyed" << std::endl;
}

Cat& Cat::operator=(const Cat& t)
{
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	if (&t != this)
	{
		this->type = t.type;
		if (brain)
			delete brain;
		brain = new Brain((*t.getBrain()));
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat: Moew !!" << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (brain);
}

void	Cat::setIdeas(const std::string &idea)
{
	for (int i = 0; i < 100; i++)
		brain->setIdea(i, idea);
}
