#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : _name(name),  _hit_points(100), _max_hit_points(100), _energy_points(50), _max_energy_point(50), _level(1), _melee_attack_damage(20), _ranged_attack_damage(15), _armor_damage_reduction(3) {
	std::cout <<"Allow me to introduce myself -- I am SC4V-TP porter bot, but my friends call me "<< name << "! Or they would if any of them were still alive. Or had existed in the first place!" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "A LOCK?! NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap){
	
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

void ScavTrap::takeDamage(int amount){

	if (amount < this->_armor_damage_reduction)
	{
		std::cout << "AHAHA Can't touch this!" << std::endl;
		return ;
	}
	if ((amount - this->_armor_damage_reduction) < this->_hit_points)
	{
		std::cout << this->_name << ": MINION , PROTECT ME !!" << std::endl;
		this->_hit_points = this->_hit_points - (amount - this->_armor_damage_reduction);
	}
	else
	{
		std::cout << this->_name << ": I'M DEAD I'M DEAD OH MY GOD I'M DEAD!" << std::endl;
		this->_hit_points = 0;
	}
}

void ScavTrap::beRepaired(int amount)
{
	std::cout << this->_name << ": Health! Eww, what flavor is red?" << std::endl;
	if (this->_hit_points + amount <= this->_max_hit_points)
		this->_hit_points = this->_hit_points + amount;
	else
		this->_hit_points = this->_max_hit_points;
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

