#include <iostream>
#include <string>

int	main(void)
{
	std::string	str("HI THIS IS BRAIN");
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;
	std::cout << "original\t" << &str << std::endl;
	std::cout << "pointer\t\t" << stringPTR << std::endl;
	std::cout << "reference\t" << &stringREF << std::endl;
	return (0);
}
