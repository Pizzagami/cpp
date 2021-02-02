#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>

int main (int argc, char **argv)
{
	int i = 1;
	std::string str;
	std::locale loc;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
	else
	{
		while (i < argc)
		{
			str = std::string(argv[i]);
			for (size_t j = 0; j < str.length(); j++)
				std::cout << std::toupper(str[j], loc);
			std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
