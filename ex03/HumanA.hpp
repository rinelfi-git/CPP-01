#pragma once
#ifndef __HUMANA_H__
# define __HUMANA_H__
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		void	attack(void);
		HumanA(std::string, Weapon &w);
		~HumanA(void);
};
#endif