#include <iostream>
#include <string>
#include "contact.class.hpp"

void	Contact::new_contact(void)
{
	while (_first_name.length() < 1)
	{
		std::cout << "First Name : ";
		std::getline(std::cin , this->_first_name);
	}
	while (_last_name.length() < 1)
	{
		std::cout << "Last Name : ";
		std::getline(std::cin , this->_last_name);
	}
	while (_nickname.length() < 1)
	{
		std::cout << "Nickname : ";
		std::getline(std::cin , this->_nickname);
	}
	std::cout << "login : ";
	std::getline(std::cin, this->_login);

	std::cout << "Phone Number : ";
	std::getline(std::cin, this->_phone_number);

	std::cout << "Postal Address : ";
	std::getline(std::cin, this->_postal_address);

	std::cout << "Birthday : ";
	std::getline(std::cin, this->_bday);

	std::cout << "Favorite meal : ";
	std::getline(std::cin, this->_favorite_meal);

	std::cout << "Underwear color : ";
	std::getline(std::cin, this->_underwear_color);

	std::cout << "Darkest secret : ";
	std::getline(std::cin, this->_darkest_secret);

	std::cout << "Contact ajouté !" << std::endl;
	return;
}

void	Contact::search_contact(int i)const{

	std::string str;
	int j;

	std::cout<< i << "         |";
	str = this->_first_name;
	if (this->_first_name.length() > 10)
		str = str.substr(0, 9) + std::string(".");
	j = str.length();
	while(j++ < 10)
		str += std::string(" ");
	str += std::string("|");
	std::cout << str;
	str = this->_last_name;
	if (this->_last_name.length() > 10)
		str = str.substr(0, 9) + std::string(".");
	j = str.length();
	while(j++ < 10)
		str += std::string(" ");
	str += std::string("|");
	std::cout << str;
	str = this->_nickname;
	if (this->_nickname.length() > 10)
		str = str.substr(0, 9) + std::string(".");
	j = str.length();
	std::cout << str << std::endl;

}

void	Contact::show_contact(void) const{

	std::cout << "First Name : ";
	std::cout << this->_first_name;
	std::cout << std::endl;
	std::cout << "Last Name : ";
	std::cout << this->_last_name;
	std::cout << std::endl;
	std::cout << "Nickname : ";
	std::cout << this->_nickname;
	std::cout << std::endl;
	std::cout << "login : ";
	std::cout << this->_login;
	std::cout << std::endl;
	std::cout << "Phone Number : ";
	std::cout << this->_phone_number;
	std::cout << std::endl;
	std::cout << "Postal Address : ";
	std::cout << this->_postal_address;
	std::cout << std::endl;
	std::cout << "Birthday : ";
	std::cout << this->_bday;
	std::cout << std::endl;
	std::cout << "Favorite meal : ";
	std::cout << this->_favorite_meal;
	std::cout << std::endl;
	std::cout << "Underwear color : ";
	std::cout << this->_underwear_color;
	std::cout << std::endl;
	std::cout << "Darkest secret : ";
	std::cout << this->_darkest_secret;
	std::cout << std::endl;
}
