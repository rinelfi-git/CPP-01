#pragma once
#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__
# include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		void	setName(std::string);
		void	announce(void);
		Zombie(void);
		Zombie(std::string);
		~Zombie(void);
};
#endif