#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*zombies;
	int		i;

	zombies = new Zombie[N];
	i = -1;
	while (++i < N)
		zombies[i].setName(name);
	return (zombies);
}