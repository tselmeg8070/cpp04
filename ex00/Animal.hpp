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
	~Animal();
	Animal& operator=(const Animal& t);
};

#endif
