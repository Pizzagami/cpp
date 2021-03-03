#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <time.h>

class Zombie{

	public:

		void    advert();
		Zombie(std::string name = "john doe", std::string type = "runner") : _type(type), _name(name) {
		};

		~Zombie() {
			std::cout <<  this->_name << " died !" << std::endl;
		};
		void	set_name(std::string name) {
			_name = name;
		}
		void	set_type(std::string type) {
			_type = type;
		}

	private:
		std::string _type;
		std::string _name;
};

#endif
