#include <iostream>
#include <string>
#include <time.h>

class Zombie{

public:

    void    advert();
    Zombie(std::string name = "john doe", std::string type = "runner") : _name(name), _type(type)
    {
        advert();
    };

	~Zombie()
    {
         std::cout  << "Le zombie " << this->_name << " a trouvé le repos eternelle" << std::endl;
    }

private:
	std::string _type;
	std::string _name;
};
