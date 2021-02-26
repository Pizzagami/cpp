#include "Character.hpp"

Character::Character(): _name("John Doe"), _ap(0), _weapon(0) {
}

Character::Character(std::string const &name): _name(name), _ap(40), _weapon(0) {
}

Character::Character(const Character & src) {
	*this = src;
}

Character::~Character()
{
	std::cout << _name << " is on an island with MJ and 2pac" << std::endl;
}

Character	&Character::operator=(const Character & rhs) {
	_name = rhs._name;
	_ap = rhs._ap;
	_weapon = rhs._weapon;
	return *this;
}

std::string	Character::getName() const {
	return _name;
}

int		Character::getAP() const {
	return _ap;
}

AWeapon		*Character::getWeapon() const {
	if (_weapon)
		return _weapon;
	return NULL;
}

void		Character::recoverAP() {
	_ap = _ap + 10;
	_ap = (_ap > 40) ? 40 : _ap;
}

void		Character::equip(AWeapon *weapon) {
	if (weapon == _weapon)
		std::cout << weapon->getName() << " is already in his hands." << std::endl;
	_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (this->_weapon == NULL)
	{
		std::cout << "No weapon equipped, can't attack" << std::endl;
		return ;
	}
	if (this->_ap - this->_weapon->getAPCost() >= 0)
	{
		this->_ap = this->_ap - this->_weapon->getAPCost();
		std::cout << this->getName() << " has attack " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
	}
	else
		std::cout << "Need more AP soldier" << std::endl;
}

std::ostream & operator<<(std::ostream &o, const Character &character)
{
	if (character.getWeapon() == NULL)
		o << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
	else
		o << character.getName() << " has " << character.getAP() << " AP and carries a " << character.getWeapon()->getName() << std::endl;
	return o;
}

