#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
	;
}

PlasmaRifle::~PlasmaRifle() {
	;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & src) : AWeapon(src.getName(), src.getAPCost(), src.getDamage()) {
	;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &src) {
	this->_name = src.getName();
	this->_apcost = src.getAPCost();
	this->_damage = src.getDamage();
	return (*this);
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
