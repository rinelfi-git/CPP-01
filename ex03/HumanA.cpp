#include "HumanA.hpp"
#include <iostream>

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon): _name(name)
{
	_weapon = &weapon;
}

HumanA::~HumanA()
{
	_weapon = NULL;
}
