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
	AWeapon::operator=(src);	
	return *this;
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
