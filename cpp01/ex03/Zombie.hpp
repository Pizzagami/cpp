#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <time.h>

class Zombie{

	public:

		void    advert();
		Zombie(std::string name = "john doe", std::string type = "runner") : _type(type), _name(name)
		{
		};

		~Zombie()
		{
		};

	private:
		std::string _type;
		std::string _name;
};

#endif
