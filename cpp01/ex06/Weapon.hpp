#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	public:

		const std::string& getType(void) const;
		void setType(std::string);

		Weapon(std::string type) : _type(type){
		};
		~Weapon(){
		};

	private:

		std::string _type;
};

#endif
