#include <iostream>
#include <string>

int	main(void)
{
	std::string	str("HI THIS IS BRAIN");
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;
	std::cout << "original\t" << &str << " [" << str << ']' << std::endl;
	std::cout << "pointer\t\t" << stringPTR << " [" << (*stringPTR) << ']' << std::endl;
	std::cout << "reference\t" << &stringREF << " [" << stringREF << ']' << std::endl;
	return (0);
}
