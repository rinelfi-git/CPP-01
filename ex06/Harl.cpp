#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl(void) {}
Harl::~Harl(void) {}

void Harl::_debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::_info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::_error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

HarlLevel hashString(std::string level)
{
    if (level == "DEBUG")
        return Harl_DEBUG;
    if (level == "INFO")
        return Harl_INFO;
    if (level == "WARNING")
        return Harl_WARN;
    if (level == "ERROR")
        return Harl_ERROR;
    return Harl_UNKNOWN;
}

void Harl::complain(std::string level)
{
    switch (hashString(level))
    {
    case Harl_DEBUG:
        _debug();
        _info();
        _warning();
        _error();
        break;
    case Harl_INFO:
        _info();
        _warning();
        _error();
        break;
    case Harl_WARN:
        _warning();
        _error();
        break;
    case Harl_ERROR:
        _error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}
