#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	int	i, length;

	length = -1;
	horde = zombieHorde(length, "Rantamplan");
	i = -1;
	while (++i < length)
		horde[i].announce();
	delete[] horde;
	return (0);
}
