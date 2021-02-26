#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
}

PowerFist::~PowerFist() {
}

PowerFist::PowerFist(const PowerFist & src) : AWeapon(src.getName(), src.getAPCost(), src.getDamage()) {
}

PowerFist &PowerFist::operator=(const PowerFist &src) {
	this->_name = src.getName();
	this->_apcost = src.getAPCost();
	this->_damage = src.getDamage();
	return (*this);
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM *" << std::endl;
}
