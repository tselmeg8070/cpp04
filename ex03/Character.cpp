#include "Character.hpp"

Character::Character() : ICharacter(), name("")
{
	for (int i = 0; i < SLOT_SIZE; i++)
		slots[i] = 0;
}

Character::Character(std::string const & name)
: ICharacter(), name(name)
{
	for (int i = 0; i < SLOT_SIZE; i++)
		slots[i] = 0;
}

Character::~Character()
{
	for (int i = 0; i < SLOT_SIZE; i++)
		if (slots[i])
			delete slots[i];
}

Character::Character(Character &t): ICharacter(), name(t.name)
{
	for (int i = 0; i < SLOT_SIZE; i++)
	{
		if (t.slots[i])
			slots[i] = t.slots[i]->clone();
	}
}

Character& Character::operator=(const Character &t)
{
	if (this != &t)
	{
		name = t.name;
		for (int i = 0; i < SLOT_SIZE; i++)
			if (slots[i])
				delete slots[i];
		for (int i = 0; i < SLOT_SIZE; i++)
			if (t.slots[i])
				slots[i] = t.slots[i]->clone();
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria *m)
{
	int	flag = -1;

	for (int i = 0; i < SLOT_SIZE; i++)
	{
		if (slots[i] == 0)
		{
			slots[i] = m;
			flag = i;
			break ;
		}
	}
	if (!m)
		std::cout << "No item found!" << std::endl;
	else if (flag == -1)
		std::cout << "Inventory is full!" << std::endl;
	else
		std::cout << "Equipped " << m->getType()
			<< " to slot " << flag << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < SLOT_SIZE)
	{

		std::cout << "Dropped " << slots[idx]->getType()
			<< " from slot " << idx << std::endl;
		slots[idx] = 0;
	}
	else
		std::cout << "Wrong slot number!" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < SLOT_SIZE)
	{
		if (slots[idx])
			slots[idx]->use(target);
		else
			std::cout << "No item found!" << std::endl;
	}
	else
		std::cout << "Wrong slot number!" << std::endl;
}
