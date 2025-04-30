#include "Harl.hpp"
#include <iostream>

int	main() {
	Harl	harl;

	std::cout << "level 1 : DEBUG" << std::endl;
	harl.complain("DEBUG");
	std::cout << "level 2 : INFO" << std::endl;
	harl.complain("INFO");
	std::cout << "level 3 : WARNING" << std::endl;
	harl.complain("WARNING");
	std::cout << "level 4 : ERROR" << std::endl;
	harl.complain("ERROR");
	std::cout << "level God : Avada kedavra" << std::endl;
	harl.complain("Avada kedavra");
	return 0;
}
