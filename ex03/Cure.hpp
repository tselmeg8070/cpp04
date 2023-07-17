#ifndef CURE
# define CURE
# include "AMateria.hpp"
# include "ICharacter.hpp"
class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	Cure(Cure &t);
	Cure& operator=(const Cure& t);
	AMateria*	clone() const;
	void		use(ICharacter& target);
};
#endif
