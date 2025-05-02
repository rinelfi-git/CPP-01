#include "Zombie.hpp"

int	main(void)
{
	Zombie *joe, *william;

	joe = newZombie("Joe Dalton");
	william = newZombie("William Dalton");
	randomChump("Jack Dalton");
	randomChump("Averell Dalton");
	joe->announce();
	william->announce();
	delete joe;
	delete william;
	return (0);
}
