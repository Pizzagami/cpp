#include <iostream>

int main(void)
{
	std::string str; 	
	std::string *ptr = &str;
	std::string &ref = str;

	str ="HI THIS IS BRAIN";

	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
}

