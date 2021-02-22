#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:

		void attack(void);
		void setWeapon(Weapon &weapon);

		HumanB(std::string name) :  _name(name){
			this->_weapon = NULL;
		};

		~HumanB(){
		};


	private:

		std::string	_name;
		Weapon		*_weapon;


};

#endif
