#include "Zombie.hpp"

void    Zombie::advert()
{
	std::cout  << this->_name << " est devenu un "<< this->_type << std::endl;
}
