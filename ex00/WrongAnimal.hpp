#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal {
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal &t);
	virtual ~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& t);
	std::string		getType() const;
	void			setType(std::string value);
	virtual void	makeSound(void) const;
};

#endif
