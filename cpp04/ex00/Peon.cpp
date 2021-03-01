#include "Peon.hpp"


Peon::~Peon(){

	std::cout << "Bleuark..." << std::endl;
}


Peon::Peon(const std::string &name) : Victim(name){

	this->_name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &peon) : Victim(peon.getname()){

	this->_name = peon.getname();
	std::cout << "Zog zog." << std::endl;
}

Peon &Peon::operator=(const Peon &peon){

	this->_name = peon.getname();
	return (*this);
}

std::ostream &operator<<(std::ostream & o, const Peon &peon){

	o << "I'm " << peon.getname() << " and I like otters!" << std::endl;
	return (o);
}

void		Peon::getPolymorphed() const {

	std::cout << this->getname() << " was just polymorphed into a pink pony!" << std::endl;
}
