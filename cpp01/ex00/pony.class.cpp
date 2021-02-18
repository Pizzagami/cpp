#include "pony.class.hpp"

void    ponyOnTheStack(std::string pony_stack)
{
    std::string l;

    Pony stacky(pony_stack);
    std::cout << "je viens de recevoir " << stacky.name
        << ", peux tu me lire son ID ?" << std::endl;

    std::cout << "bday : ";
	std::cin >> stacky.bday;

    std::cout << "color : ";
	std::cin >> stacky.color;
	
	std::cout << "Favorite_meal : ";
	std::cin >> stacky.favorite_meal;
	
	std::cout << "size : ";
	std::cin >> stacky.size;

    std::cout << "weight : ";
	std::cin >> stacky.weight;

    std::cout << "Donc si j ai bien noté, " << stacky.name
        << " est né le " << stacky.bday << std::endl
        << "Sa robe est " << stacky.color
        << "et son repas preferé est le " << stacky.favorite_meal << std::endl
        << " il fait " << stacky.size
        << " et pèse " << stacky.weight << std::endl;

    std::cout << "..." << std ::endl << "..." << std::endl
        << "l'horloge tourne.."<< std::endl;
    std::getline(std::cin, stacky.weight);
}

void    ponyOnTheHeap(std::string pony_heap){

    Pony* heapy = new Pony(pony_heap);

    std::cout << "je viens de recevoir " << heapy->name
        << ", peux tu me lire son ID ? " << std::endl;

    std::cout << "bday : ";
	std::cin >> heapy->bday;

    std::cout << "color : ";
	std::cin >> heapy->color;
	
	std::cout << "Favorite_meal : ";
	std::cin >> heapy->favorite_meal;
	
	std::cout << "size : ";
	std::cin >> heapy->size;

    std::cout << "weight : ";
	std::cin >> heapy->weight;

    std::cout << "Donc si j ai bien noté, " << heapy->name
        << " est né le" << heapy->bday << std::endl
        << "Sa robe est " << heapy->color
        << "et son repas preferé est le" << heapy->favorite_meal << std::endl
        << " il fait" << heapy->size
        << "et pèse " << heapy->weight << std::endl;

    std::cout << "..." << std ::endl << "..." << std::endl
        << "l'horloge tourne.." << std::endl;
    std::getline(std::cin,heapy->weight);

    delete heapy;
}
