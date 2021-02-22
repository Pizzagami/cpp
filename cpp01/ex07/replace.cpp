#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::string		str1 = argv[2];
	std::string		str2 = argv[3];
	std::ifstream	ifile(argv[1]);
	std::string		str;
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
		str << ifile;
		std::replace(str.begin(), str(end), str1, str2);
		ofile << line;
		ifile.close();
		ofile.close();
	}
	return 0;
}
