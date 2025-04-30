#pragma once
#ifndef __HUMANB_H__
# define __HUMANB_H__
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		void	attack();
		void	setWeapon(Weapon*);
		HumanB(std::string);
		~HumanB(void);
};
#endif