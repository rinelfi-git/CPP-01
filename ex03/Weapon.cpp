#include "Weapon.hpp"

std::string	Weapon::getType(void) const
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::Weapon(std::string type): _type(type)
{}
