#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain {
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(Brain &t);
	~Brain();
	Brain& operator=(const Brain& t);
	std::string	getIdea(int index) const;
	void		setIdea(int index, std::string idea);
};

#endif
