#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <string>

class Dog : public Animal {
private:
	Brain*	brain;
public:
	Dog();
	Dog(Dog &t);
	~Dog();
	Dog& operator=(const Dog& t);
	void	makeSound(void) const;
	void	setIdeas(const std::string &idea);
	Brain*	getBrain(void) const;
};

#endif
