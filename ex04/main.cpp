#include <fstream>
#include <iostream>

bool	processing(std::ifstream &input, std::ofstream &output, char *search, char *replace)
{
	std::string	readline;
	long		i;
	long		j;
	bool		fail;

	while (!input.fail() && !output.fail() && std::getline(input, readline))
	{
		i = 0;
		j = 0;
		i = readline.find(search, i);
		if (i < 0)
			output << readline;
		else
		{
			while (i >= 0)
			{
				output << readline.substr(j, i - j);
				i += std::string(search).length();
				j = i;
				output << replace;
				i = readline.find(search, i);
			}
			output << readline.substr(j, readline.length() - j);
		}
		output << std::endl;
	}
	fail = input.fail() || output.fail();
	input.close();
	output.close();
	return (fail);
}

int	main(int argc, char **argv)
{

	std::ifstream input;
	std::ofstream output;

	if (argc > 4)
	{
		std::cerr << "Too many arguments" << std::endl;
		return (1);
	}
	if (argc < 4)
	{
		std::cerr << "Too few arguments" << std::endl;
		return (1);
	}
	input.open(argv[1]);
	if (!input.is_open())
	{
		std::cerr << "Opening file error" << std::endl;
		input.close();
		return (2);
	}
	output.open(std::string(argv[1]) + ".replace");
	if (!output.is_open())
	{
		std::cerr << "Creating file error" << std::endl;
		input.close();
		output.close();
		return (2);
	}
	if (!processing(input, output, argv[2], argv[3]))
	{
		std::cerr << "File stream error" << std::endl;
		return (2);
	}
	return (0);
}
