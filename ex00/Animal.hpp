#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal {
protected:
	std::string	type;
public:
	Animal();
	Animal(Animal &t);
	virtual ~Animal();
	Animal& operator=(const Animal& t);
	std::string		getType() const;
	void			setType(std::string value);
	virtual void	makeSound(void) const;
};

#endif
