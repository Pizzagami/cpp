#include "pony.class.hpp"

void	ponyOnTheStack(std::string pony_stack)
{
	std::string str;
	Pony stacky(pony_stack);

	std::cin.clear();
	std::cout << "je viens de recevoir " << stacky.get_name()
		<< ", peux tu me lire son ID ?" << std::endl;

	std::cout << "bday : ";
	do { 
		(std::getline(std::cin, str));
	}
	while (str.length() < 1);
	stacky.set_bday(str);

	std::cout << "color : ";
	do { 
		(std::getline(std::cin, str));
	}
	while (str.length() < 1);

	stacky.set_color(str);

	std::cout << "Favorite_meal : ";
	do { 
		(std::getline(std::cin, str));
	}
	while (str.length() < 1);
	stacky.set_favorite_meal(str);

	std::cout << "size : ";
	do { 
		(std::getline(std::cin, str));
	}
	while (str.length() < 1);
	stacky.set_size(str);

	std::cout << "weight : ";
	do { 
		(std::getline(std::cin, str));
	}
	while (str.length() < 1);
	stacky.set_weight(str);

	std::cout << "Donc si j ai bien noté, " << stacky.get_name()
		<< " est né le " << stacky.get_bday() << std::endl
		<< "Sa robe est " << stacky.get_color()
		<< " et son repas preferé est le " << stacky.get_favorite_meal() << std::endl
		<< " il fait " << stacky.get_size()
		<< " et pèse " << stacky.get_weight() << std::endl;

	std::cout << "..." << std ::endl << "..." << std::endl
		<< "l'horloge tourne.."<< std::endl;
	std::getline(std::cin, str);
}

void    ponyOnTheHeap(std::string pony_heap){

	Pony* heapy = new Pony(pony_heap);
	
	std::cin.clear();
	std::string str;
	std::cout << "je viens de recevoir " << heapy->get_name()
		<< ", peux tu me lire son ID ?" << std::endl;

	std::cout << "bday : ";
	do { 
		(std::getline(std::cin, str));
	}
	while (str.length() < 1);
	heapy->set_bday(str);

	std::cout << "color : ";
	do { 
		(std::getline(std::cin, str));
	}
	while (str.length() < 1);
	heapy->set_color(str);

	std::cout << "Favorite_meal : ";
	do { 
		(std::getline(std::cin, str));
	}
	while (str.length() < 1);
	heapy->set_favorite_meal(str);

	std::cout << "size : ";
	do { 
		(std::getline(std::cin, str));
	}
	while (str.length() < 1);
	heapy->set_size(str);

	std::cout << "weight : ";
	do { 
		(std::getline(std::cin, str));
	}
	while (str.length() < 1);
	heapy->set_weight(str);

	std::cout << "Donc si j ai bien noté, " << heapy->get_name()
		<< " est né le " << heapy->get_bday() << std::endl
		<< "Sa robe est " << heapy->get_color()
		<< " et son repas preferé est le " << heapy->get_favorite_meal() << std::endl
		<< " il fait " << heapy->get_size()
		<< " et pèse " << heapy->get_weight() << std::endl;

	std::cout << "..." << std ::endl << "..." << std::endl
		<< "l'horloge tourne.."<< std::endl;
	std::getline(std::cin, str);
	delete heapy;
}
