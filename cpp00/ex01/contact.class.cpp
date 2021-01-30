#include <iostream>
#include <string>
#include "contact.class.hpp"

void	Contact::new_contact(void)
{
	std::cout << "First Name : ";
	std::cin >> this->first_name;
	
	std::cout << "Last Name : ";
	std::cin >> this->last_name;
	
	std::cout << "Nickname : ";
	std::cin >> this->nickname;
	
	std::cout << "login : ";
	std::cin >> this->login;
	
	std::cout << "Phone Number : ";
	std::cin >> this->phone_number;
	
	std::cout << "Postal Address : ";
	std::cin >> this->postal_address;
	
	std::cout << "Birthday : ";
	std::cin >> this->bday;
	
	std::cout << "Favorite meal : ";
	std::cin >> this->favorite_meal;
	
	std::cout << "Underwear color : ";
	std::cin >> this->underwear_color;
	
	std::cout << "Darkest secret : ";
	std::cin >> this->darkest_secret;

	std::cout << "Contact ajouté !" << std::endl;
	return;
}

void	Contact::search_contact(int i)const{

	std::string str;
	int j;

	std::cout<< i << "         |";
	str = this->first_name;
	if (this->first_name.length() > 10)
		str = str.substr(0, 9) + std::string(".");
	j = str.length();
	while(j++ < 10)
		str += std::string(" ");
	str += std::string("|");
	std::cout << str;
	str = this->last_name;
	if (this->last_name.length() > 10)
		str = str.substr(0, 9) + std::string(".");
	j = str.length();
	while(j++ < 10)
		str += std::string(" ");
	str += std::string("|");
	std::cout << str;
	str = this->nickname;
	if (this->nickname.length() > 10)
		str = str.substr(0, 9) + std::string(".");
	j = str.length();
	std::cout << str << std::endl;
	
}
void	Contact::show_contact(void) const{

	std::cout << this->first_name;
	std::cout << std::endl;
	std::cout << this->last_name;
	std::cout << std::endl;
	std::cout << this->nickname;
	std::cout << std::endl;
	std::cout << this->login;
	std::cout << std::endl;
	std::cout << this->phone_number;
	std::cout << std::endl;
	std::cout << this->postal_address;
	std::cout << std::endl;
	std::cout << this->bday;
	std::cout << std::endl;
	std::cout << this->favorite_meal;
	std::cout << std::endl;
	std::cout << this->underwear_color;
	std::cout << std::endl;
	std::cout << this->darkest_secret;
	std::cout << std::endl;
}