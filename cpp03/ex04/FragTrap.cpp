#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name){

	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_point = 100;
	this->_level = 1;
	this->_name = name;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout <<"Allow me to introduce myself -- I am FR4G-TP shoebox bot, but my friends call me "<< name << "! Or they would if any of them were still alive. Or had existed in the first place!" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "STAIRS?! NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap(fragtrap) {
	
	this->_name = fragtrap._name;
	this->_hit_points = fragtrap._hit_points;
	this->_max_hit_points = fragtrap._max_hit_points;
	this->_energy_points = fragtrap._energy_points;
	this->_max_energy_point = fragtrap._max_energy_point;
	this->_level = fragtrap._level;
	this->_melee_attack_damage = fragtrap._melee_attack_damage;
	this->_ranged_attack_damage = fragtrap._ranged_attack_damage;
	this->_armor_damage_reduction = fragtrap._armor_damage_reduction;

		std::cout <<"Allow me to introduce myself -- I am FR4G-TP shoebox bot, but my friends call me "<< this->_name << "! Or they would if any of them were still alive. Or had existed in the first place!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap){
	
	this->_name = fragtrap._name;
	this->_hit_points = fragtrap._hit_points;
	this->_max_hit_points = fragtrap._max_hit_points;
	this->_energy_points = fragtrap._energy_points;
	this->_max_energy_point = fragtrap._max_energy_point;
	this->_level = fragtrap._level;
	this->_melee_attack_damage = fragtrap._melee_attack_damage;
	this->_ranged_attack_damage = fragtrap._ranged_attack_damage;
	this->_armor_damage_reduction = fragtrap._armor_damage_reduction;

	std::cout <<"Allow me to introduce myself -- I am FR4G-TP shoebox bot, but my friends call me "<< this->_name << "! Or they would if any of them were still alive. Or had existed in the first place!" << std::endl;
	return (*this);
}

int FragTrap::rangedAttack(const std::string &target){
	std::cout << "FR4G-TP " << this->_name << " attack  " << target << " at range, causing " << this->_ranged_attack_damage << " points of damage !" << std::endl;
	return (this->_ranged_attack_damage);
}

int FragTrap::meleeAttack(const std::string &target){
		std::cout << "FR4G-TP " << this->_name << " attack  " << target << " at melee, causing " << this->_ranged_attack_damage << " points of damage !" << std::endl;
	return (this->_melee_attack_damage);
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	const char* attacks[] = {
		" Clap-In-The-Box !",
		" Gun Wizard !",
		" Meatsplosion!",
		" Pirate Ship Mode !",
		" One Shot Wonder !",
		" Laser Inferno !",
		" Miniontrap !",
		" Meat Unicycle !",
		" Funzerker !",
		" Mechromagician !",
		" Shhhh... Trap !",
		" Blight Bot !",
		" Rubber Ducky !",
		" Senseless Sacrifice !"
	};

	if (this->_energy_points - 25 >= 0)
	{
		this->_energy_points = this->_energy_points - 25;
		std::cout << this->_name << " attack " << target << " with" << attacks[((std::rand()) % 14)] << std::endl;
	}
	else
	{
		std::cout << this->_name << ": Minion let me rest " << std::endl;
	}
}

