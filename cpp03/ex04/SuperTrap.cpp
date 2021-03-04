#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string & name) : ClapTrap(name), NinjaTrap(name), FragTrap(name){

	this->_energy_points = 120;
	this->_max_energy_point = 120;
	this->_melee_attack_damage = 60;
	std::cout << " I'M THE BEST, I'M A GOD , I'M "<< this->_name << this->_melee_attack_damage << this->_ranged_attack_damage  << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &supertrap) : ClapTrap(supertrap._name), NinjaTrap(supertrap._name), FragTrap(supertrap._name){

	this->_hit_points = supertrap._hit_points;
	this->_max_hit_points = supertrap._max_hit_points;
	this->_energy_points = supertrap._energy_points;
	this->_max_energy_point = supertrap._max_energy_point;
	this->_level = supertrap._level;
	this->_name = supertrap._name;
	this->_melee_attack_damage = supertrap._melee_attack_damage;
	this->_ranged_attack_damage = supertrap._ranged_attack_damage;
	this->_armor_damage_reduction = supertrap._armor_damage_reduction;
	std::cout << "MY NAME IS " << this->_name << " AND I AM THE BEST OF ALL" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &supertrap){

	this->_hit_points = supertrap._hit_points;
	this->_max_hit_points = supertrap._max_hit_points;
	this->_energy_points = supertrap._energy_points;
	this->_max_energy_point = supertrap._max_energy_point;
	this->_level = supertrap._level;
	this->_name = supertrap._name;
	this->_melee_attack_damage = supertrap._melee_attack_damage;
	this->_ranged_attack_damage = supertrap._ranged_attack_damage;
	this->_armor_damage_reduction = supertrap._armor_damage_reduction;
    return *this;
}

SuperTrap::~SuperTrap(){

	std::cout << "NIETZSCHE WAS RIGHT, I'M DIYING, NNNNNOOOOOOOOOOO !" << std::endl;
}
