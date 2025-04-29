#include "HumanB.hpp"
#include <iostream>

void	HumanB::attack(void)
{
	if (_weapon != NULL)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " don't have weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

HumanB::HumanB(std::string name): _name(name)
{
	_weapon = NULL;
}

HumanB::~HumanB(void)
{
	_weapon = NULL;
}
