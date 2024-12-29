#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}

void	randomChump(std::string name)
{
	Zombie zom(name);
	zom.announce();
}

int	main(void)
{
	Zombie *joe, *william, *horde;
	int	i;

	joe = newZombie("Joe Dalton");
	william = newZombie("William Dalton");
	horde = zombieHorde(20, "Rantamplan");
	randomChump("Jack Dalton");
	randomChump("Averell Dalton");
	joe->announce();
	william->announce();
	i = -1;
	while (++i < 20)
		horde[i].announce();
	delete joe;
	delete william;
	delete[] horde;
	return (0);
}
