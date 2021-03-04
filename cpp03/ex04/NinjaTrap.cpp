#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(name){

	this->_hit_points = 60;
	this->_max_hit_points = 60;
	this->_energy_points = 120;
	this->_max_energy_point = 120;
	this->_level = 1;
	this->_name = name;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_damage_reduction = 0;
	std::cout <<"Allow me to introduce myself -- I am NNJ4-TP genin bot, but my friends call me "<< name << "! Or they would if any of them were still alive. Or had existed in the first place!" << std::endl;
}

NinjaTrap::~NinjaTrap(){
	std::cout << "SAMOURAI ?! NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninjatrap) : ClapTrap(ninjatrap) {
	
	this->_name = ninjatrap._name;
	this->_hit_points = ninjatrap._hit_points;
	this->_max_hit_points = ninjatrap._max_hit_points;
	this->_energy_points = ninjatrap._energy_points;
	this->_max_energy_point = ninjatrap._max_energy_point;
	this->_level = ninjatrap._level;
	this->_melee_attack_damage = ninjatrap._melee_attack_damage;
	this->_ranged_attack_damage = ninjatrap._ranged_attack_damage;
	this->_armor_damage_reduction = ninjatrap._armor_damage_reduction;

		std::cout <<"Allow me to introduce myself -- I am NNJ4-TP genin bot, but my friends call me "<< this->_name << "! Or they would if any of them were still alive. Or had existed in the first place!" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &ninjatrap){
	
	this->_name = ninjatrap._name;
	this->_hit_points = ninjatrap._hit_points;
	this->_max_hit_points = ninjatrap._max_hit_points;
	this->_energy_points = ninjatrap._energy_points;
	this->_max_energy_point = ninjatrap._max_energy_point;
	this->_level = ninjatrap._level;
	this->_melee_attack_damage = ninjatrap._melee_attack_damage;
	this->_ranged_attack_damage = ninjatrap._ranged_attack_damage;
	this->_armor_damage_reduction = ninjatrap._armor_damage_reduction;

	std::cout <<"Allow me to introduce myself -- I am NNJ4-TP genin bot, but my friends call me "<< this->_name << "! Or they would if any of them were still alive. Or had existed in the first place!" << std::endl;
	return (*this);
}

int NinjaTrap::meleeAttack(const std::string &target){

	std::cout << "NNJ4 " << this->_name << " launch a sneaky attack on " << target << " with ninjato, dealing " << this->_melee_attack_damage << " points of damage !" << std::endl;
    return (this->_melee_attack_damage);
}

int NinjaTrap::rangedAttack(const std::string &target){

	std::cout << "NNJ4 " << this->_name << "launch a sneaky attack on " << target << " with shuriken, dealing " << this->_ranged_attack_damage << " points of damage !" << std::endl; return (this->_ranged_attack_damage);
}

void NinjaTrap::ninjaShoebox(ClapTrap &claptrap)
{
    const char *attacks[] = {
        " I live for such kills ",
        " Sorry, did that hurt?.. That 'sorry' was sarcasm... I am not sorry",
        " Target disassembled",
        " Stealth!",
        " I can kill you in one clap"
    };

    std::cout << this->_name << " attaque " << claptrap.getname() << attacks[((std::rand()) % 5)] << std::endl;
    if (((std::rand()) % 2) == 0)
		claptrap.takeDamage(this->meleeAttack(claptrap.getname()));
    else
		claptrap.takeDamage(this->rangedAttack(claptrap.getname()));
}

void NinjaTrap::ninjaShoebox(FragTrap &fragtrap)
{
    const char *attacks[] = {
        " I live for such kills ",
        " Sorry, did that hurt?.. That 'sorry' was sarcasm... I am not sorry",
        " Target disassembled",
        " Stealth!",
        " A fragtrap is such an easy frag"
    };

    std::cout << this->_name << " attaque " << fragtrap.getname() << attacks[((std::rand()) % 5)] << std::endl;
    if (((std::rand()) % 2) == 0)
		fragtrap.takeDamage(this->meleeAttack(fragtrap.getname()));
    else
		fragtrap.takeDamage(this->rangedAttack(fragtrap.getname()));
}

void NinjaTrap::ninjaShoebox(ScavTrap &scavtrap)
{
    const char *attacks[] = {
        " I live for such kills ",
        " Sorry, did that hurt?.. That 'sorry' was sarcasm... I am not sorry",
        " Target disassembled",
        " Stealth!",
        " Time to put a scavtrap at the recycling center "
    };

    std::cout << this->_name << " attaque " << scavtrap.getname() << attacks[((std::rand()) % 5)] << std::endl;
    if (((std::rand()) % 2) == 0)
		scavtrap.takeDamage(this->meleeAttack(scavtrap.getname()));
    else
		scavtrap.takeDamage(this->rangedAttack(scavtrap.getname()));
}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninjatrap)
{
    const char *attacks[] = {
        " I live for such kills ",
        " Sorry, did that hurt?.. That 'sorry' was sarcasm... I am not sorry",
        " Target disassembled",
        " Stealth!",
        " A fragtrap is such an easy frag"
    };

    std::cout << this->_name << " attaque " << ninjatrap.getname() << attacks[((std::rand()) % 5)] << std::endl;
    if (((std::rand()) % 2) == 0)
		ninjatrap.takeDamage(this->meleeAttack(ninjatrap.getname()));
    else
		ninjatrap.takeDamage(this->rangedAttack(ninjatrap.getname()));
}
