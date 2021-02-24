#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name){

	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 50;
	this->_max_energy_point = 50;
	this->_level = 1;
	this->_name = name;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;
	std::cout <<"Allow me to introduce myself -- I am SC4V-TP porter bot, but my friends call me "<< name << "! Or they would if any of them were still alive. Or had existed in the first place!" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "A LOCK?! NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : ClapTrap(scavtrap) {

	this->_name = scavtrap._name;
	this->_hit_points = scavtrap._hit_points;
	this->_max_hit_points = scavtrap._max_hit_points;
	this->_energy_points = scavtrap._energy_points;
	this->_max_energy_point = scavtrap._max_energy_point;
	this->_level = scavtrap._level;
	this->_melee_attack_damage = scavtrap._melee_attack_damage;
	this->_ranged_attack_damage = scavtrap._ranged_attack_damage;
	this->_armor_damage_reduction = scavtrap._armor_damage_reduction;

	std::cout <<"Allow me to introduce myself -- I am SC4V-TP porter bot, but my friends call me "<< this->_name << "! Or they would if any of them were still alive. Or had existed in the first place!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap){

	this->_name = scavtrap._name;
	this->_hit_points = scavtrap._hit_points;
	this->_max_hit_points = scavtrap._max_hit_points;
	this->_energy_points = scavtrap._energy_points;
	this->_max_energy_point = scavtrap._max_energy_point;
	this->_level = scavtrap._level;
	this->_melee_attack_damage = scavtrap._melee_attack_damage;
	this->_ranged_attack_damage = scavtrap._ranged_attack_damage;
	this->_armor_damage_reduction = scavtrap._armor_damage_reduction;

	std::cout <<"Allow me to introduce myself -- I am SC4V-TP porter bot, but my friends call me "<< this->_name << "! Or they would if any of them were still alive. Or had existed in the first place!" << std::endl;
	return (*this);
}

void ScavTrap::rangedAttack(const std::string &target){
	std::cout << "SC4V-TP " << this->_name << " attack  " << target << " at range, causing " << this->_ranged_attack_damage << " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target){
	std::cout << "SC4V-TP " << this->_name << " attack  " << target << " at melee, causing " << this->_ranged_attack_damage << " points of damage !" << std::endl;
}


void ScavTrap::challengeNewcomer(const std::string &target)
{
	const char* attacks[] = {
		" Open a locked door",
		" Climb stairs",
		" Have real friends",
		" Be useful",
		" Retrive his eye",
		" Give 5 high five"
	};
	std::cout << this->_name << " challenge  " << target << " to" << attacks[((std::rand()) % 6 )] << std::endl;
}

