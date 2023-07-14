#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal {
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(const std::string &type);
	WrongAnimal(WrongAnimal &t);
	virtual ~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& t);
	const std::string		&getType() const;
	void			setType(const std::string &value);
	void	makeSound(void) const;
};

#endif
