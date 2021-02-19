#include <iostream>
#include <string>

void    ponyOnTheHeap(std::string pony_heap);
void    ponyOnTheStack(std::string pony_stack);

class Pony{

public:

    void    ponyOnTheStack(std::string pony_stack);
    void    ponyOnTheHeap(std::string pony_heap);
    Pony(std::string name) : _name(name)
    {
        std::cout  << "Le poney " << this->_name << " est arrivé" << std::endl;
    }

	~Pony()
    {
         std::cout  << "Le poney " << this->_name << " est partie a la ferme des poneys" << std::endl;
    }

private:

    std::string _name;
    std::string _color;
    std::string _bday;
    std::string _favorite_meal;
    std::string _size;
    std::string _weight;

};