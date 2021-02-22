#include <iostream>
#include <string>
#include <fstream>

std::string str_replace_all(std::string line, std::string str1, std::string str2)
{
	size_t	pos = 0;

	while((pos = line.find(str1, pos)) != std::string::npos)
	{
		line.replace(pos, str1.length(), str2);
		pos += str2.length();
	}
	return line;
}

int			main(int argc, char **argv)
{
	std::string		str1 = argv[2];
	std::string		str2 = argv[3];
	std::ifstream	ifile(argv[1]);
	std::string		line;
	if (argc != 4)
	{
		std::cout << " Error nombre d'arguments incorrect ! " << std::endl;
		return 0;
	}
	if (!(ifile.is_open()))
	{
		std::cout << "Probleme avec le file : " << argv[1] << std::endl;
		return 0;
	}
	else
	{
		std::ofstream ofile("FILENAME.replace");
		while(std::getline(ifile, line))
			ofile << str_replace_all(line, str1, str2) << "\n";
		ifile.close();
		ofile.close();
	}
	return 0;
}
