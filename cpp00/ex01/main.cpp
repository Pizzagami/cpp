#include <iostream>
#include <string>
#include "contact.class.hpp"

int main(void){

	Contact		list_contact[8];
	std::string	str , jj;
	int			i = 0;
	int			j;

	while (1)
	{
		std::cout << "Que desirez vous faire ?" << std::endl;
		std::getline(std::cin, str);
		if (str == std::string("EXIT"))
			return (0);
		else if (str == std::string ("ADD"))
		{
			if (i < 8)
			{
				list_contact[i].new_contact();
				i++;
			}
			else
				std::cout << "Action impossible : taille maximum du repertoire atteint" << std::endl;
		}
		else if (str == std::string("SEARCH"))
		{
			if (i > 0)
			{
				j = 0;
				std::cout << "index     |first name|last name |nickname" << std::endl;
				while (j < i)
				{
					list_contact[j].search_contact(j);
					j++;
				}
				std::cout << "Quel contact souhaitez vous voir ?" << std::endl << "Index du contact : ";
				std::getline(std::cin, jj);
				if (jj.length() == 1 && isdigit(jj[0]))
					j = std::stoi(jj, 0, 10);
				else
					j = -2;
				if (j >= 0 && j < i)
					list_contact[j].show_contact();
				else
					std::cout << "Mauvaise index retour a l'accueil !" << std::endl;
			}
				else
					std::cout << "il n'y a actuellement aucun contact dans le repertoire" << std::endl;
		}
	}
}
