#include <iostream>
#include <string>
#include <time.h>

class Zombie{

public:

    Zombie(std::string name, std::string type) : _name(name)
    {
        this->_type = type;
        std::cout  << this->_name << " est devenu un "<< this->_type << std::endl;
    }

	~Zombie()
    {
         std::cout  << "Le zombie " << this->_name << " a trouvé le repos eternelle" << std::endl;
    }

private:
	std::string _type;
	std::string _name;
};