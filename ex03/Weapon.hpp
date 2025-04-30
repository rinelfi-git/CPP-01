#pragma once
#ifndef __WEAPON_H__
# define __WEAPON_H__
# include <string>

class Weapon
{
	private:
		std::string	_type;
	public:
		const std::string	&getType(void) const;
		void		setType(std::string type);
		Weapon(std::string);
};
#endif