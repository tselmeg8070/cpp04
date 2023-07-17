#ifndef ICE
# define ICE
# include "AMateria.hpp"
# include "ICharacter.hpp"
class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(Ice &t);
	Ice& operator=(const Ice& t);
	AMateria*	clone() const;
	void		use(ICharacter& target);
};
#endif
