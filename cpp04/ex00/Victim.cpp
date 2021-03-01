#include "Victim.hpp"


Victim::Victim(const std::string &name) : _name(name){

	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim(void){

	std::cout << "Victim " << this->_name << " died for no apparent reasons!" << std::endl;
}

Victim::Victim(const Victim &Victim){

	this->_name = Victim._name;
	std::cout << "A random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim &Victim::operator=(const Victim &Victim){

	this->_name = Victim._name;
	return (*this);
}

std::ostream &operator<<(std::ostream & o, const Victim &Victim){

	o << "I'm " << Victim.getname() << " and I like otters!" << std::endl;
	return (o);
}

std::string Victim::getname() const {

	return (this->_name);
}

void		Victim::getPolymorphed() const {

    std::cout << this->_name << " was just polymorphed in a cute little sheep!" << std::endl;
}

