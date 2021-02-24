#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : _name(name),  _hit_points(0), _max_hit_points(0), _energy_points(0), _max_energy_point(0), _level(0), _melee_attack_damage(0), _ranged_attack_damage(0), _armor_damage_reduction(0) {
	std::cout <<"Deploying protector: " << name << "!" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Silence?! NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & claptrap){
	
	this->_name = claptrap._name;
	this->_hit_points = claptrap._hit_points;
	this->_max_hit_points = claptrap._max_hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_max_energy_point = claptrap._max_energy_point;
	this->_level = claptrap._level;
	this->_melee_attack_damage = claptrap._melee_attack_damage;
	this->_ranged_attack_damage = claptrap._ranged_attack_damage;
	this->_armor_damage_reduction = claptrap._armor_damage_reduction;

	std::cout <<"Deploying protector: " << this->_name << "!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap){
	
	this->_name = claptrap._name;
	this->_hit_points = claptrap._hit_points;
	this->_max_hit_points = claptrap._max_hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_max_energy_point = claptrap._max_energy_point;
	this->_level = claptrap._level;
	this->_melee_attack_damage = claptrap._melee_attack_damage;
	this->_ranged_attack_damage = claptrap._ranged_attack_damage;
	this->_armor_damage_reduction = claptrap._armor_damage_reduction;

	std::cout <<"Deploying protector: " << this->_name << "!" << std::endl;
	return (*this);
}

void ClapTrap::takeDamage(int amount){

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

void ClapTrap::beRepaired(int amount)
{
	std::cout << this->_name << ": Health! Eww, what flavor is red?" << std::endl;
	if (this->_hit_points + amount <= this->_max_hit_points)
		this->_hit_points = this->_hit_points + amount;
	else
		this->_hit_points = this->_max_hit_points;
}

std::string ClapTrap::getname()
{
	return (std::string(this->_name));
}
