#include "Harl.hpp"
#include <iostream>

Harl::Harl(void){}
Harl::~Harl(void){}

void	Harl::_debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::_info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::_error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {
	const int	max_level = 4;
	std::string	levels[max_level] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};
	void		(Harl::*action[max_level])(void) = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error,
	};

	int	i = 0;
	while (i < max_level) {
		if (level == levels[i++]) {
			(this->*action[i - 1])();
			return ;
		}
	}
	std::cerr << "Unknown level" << std::endl;
}
