#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		
		void attack(void);

		HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon){
		};

		~HumanA(){
		};


	private:

		std::string _name;
		Weapon		&_weapon;

};

#endif
