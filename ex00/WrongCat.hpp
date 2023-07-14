#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(WrongCat &t);
	~WrongCat();
	WrongCat& operator=(const WrongCat& t);
	void	makeSound(void) const;
};

#endif
