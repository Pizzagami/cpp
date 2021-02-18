#include <iostream>
#include <string>

void    ponyOnTheHeap(std::string pony_heap);
void    ponyOnTheStack(std::string pony_stack);

class Pony{

public:

    std::string name;
    std::string color;
    std::string bday;
    std::string favorite_meal;
    std::string size;
    std::string weight;
    Pony(std::string name) : name(name)
    {
        std::cout  << "Le poney " << this->name << " est arrivé" << std::endl;
    }

	~Pony()
    {
         std::cout  << "Le poney " << this->name << " est partie a la ferme des poneys" << std::endl;
    }

};