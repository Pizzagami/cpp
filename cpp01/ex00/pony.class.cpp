#include "pony.class.hpp"

void    Pony::ponyOnTheStack(std::string pony_stack)
{
    std::string l;

    Pony stacky(pony_stack);
    std::cout << "je viens de recevoir " << this->_name
        << ", peux tu me lire son ID ?" << std::endl;

    std::cout << "bday : ";
	std::cin >> this->_bday;

    std::cout << "color : ";
	std::cin >> this->_color;
	
	std::cout << "Favorite_meal : ";
	std::cin >> this->_favorite_meal;
	
	std::cout << "size : ";
	std::cin >> this->_size;

    std::cout << "weight : ";
	std::cin >> this->_weight;

    std::cout << "Donc si j ai bien noté, " << this->_name
        << " est né le " << this->_bday << std::endl
        << "Sa robe est " << this->_color
        << "et son repas preferé est le " << this->_favorite_meal << std::endl
        << " il fait " << this->_size
        << " et pèse " << this->_weight << std::endl;

    std::cout << "..." << std ::endl << "..." << std::endl
        << "l'horloge tourne.."<< std::endl;
    std::getline(std::cin, this->_weight);
}

void    Pony::ponyOnTheHeap(std::string pony_heap){

    Pony* heapy = new Pony(pony_heap);

    std::cout << "je viens de recevoir " << this->_name
        << ", peux tu me lire son ID ? " << std::endl;

    std::cout << "bday : ";
	std::cin >> this->_bday;

    std::cout << "color : ";
	std::cin >> this->_color;
	
	std::cout << "Favorite_meal : ";
	std::cin >> this->_favorite_meal;
	
	std::cout << "size : ";
	std::cin >> this->_size;

    std::cout << "weight : ";
	std::cin >> this->_weight;

    std::cout << "Donc si j ai bien noté, " << this->_name
        << " est né le" << this->_bday << std::endl
        << "Sa robe est " << this->_color
        << "et son repas preferé est le" << this->_favorite_meal << std::endl
        << " il fait" << this->_size
        << "et pèse " << this->_weight << std::endl;

    std::cout << "..." << std ::endl << "..." << std::endl
        << "l'horloge tourne.." << std::endl;
    std::getline(std::cin,this->_weight);

    delete heapy;
}
