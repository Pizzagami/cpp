#include "Pizza.hpp"

Pizza::Pizza(std::string const name): Victim(name) {

	std::cout << "PIIIIZZZAAAA " << name << std::endl;
}

Pizza::Pizza(const Pizza &ref): Victim(ref) {

	*this = ref;
}

Pizza::~Pizza() {

	std::cout << "CHEEEEESE" << std::endl;
}


Pizza			&Pizza::operator=(Pizza const &ref) {

	Victim::operator=(ref);
	return *this;
}

void			Pizza::getPolymorphed() const {

	std::cout << this->getname() << " has been turned into a Human!" << std::endl;
}
