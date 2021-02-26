#include "Aweapon.hpp"

AWeapon::AWeapon(): _name("????"), _apcost(0), _damage(0) {
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage) {
}

AWeapon::AWeapon(const AWeapon & src ) {
	*this = src;
}

AWeapon::~AWeapon() {
}

AWeapon					&AWeapon::operator=(const AWeapon & rhs) {

	this->_name = rhs._name;
	this->_apcost = rhs._apcost;
	this->_damage = rhs._damage;
	return *this;
}

const std::string		AWeapon::getName() const {

	return _name;
}

int						AWeapon::getAPCost() const {

	return _apcost;
}

int						AWeapon::getDamage() const {

	return _damage;
}
