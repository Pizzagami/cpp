#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

void    ponyOnTheHeap(std::string pony_heap);
void    ponyOnTheStack(std::string pony_stack);

class Pony{

public:

    void    ponyOnTheStack(std::string pony_stack);
    void    ponyOnTheHeap(std::string pony_heap);
    Pony(std::string name) : _name(name)
    {
        std::cout  << "Le poney " << this->_name << " est arrivé" << std::endl;
    }

	~Pony()
    {
         std::cout  << "Le poney " << this->_name << " est partie a la ferme des poneys" << std::endl;
    }
	
	void	set_color(std::string str) {
		_color = str;
	}
	void	set_bday(std::string str) {
		_bday = str;
	}
	void	set_favorite_meal(std::string str) {
		_favorite_meal = str;
	}

	void set_size(std::string str) {
		_size = str;
	}

	void set_weight(std::string str) {
		_weight = str;
	}

	std::string	get_name() {
		return (_name);
	}

	std::string	get_color() {
		return (_color);
	}

	std::string	get_bday() {
		return (_bday);
	}

	std::string	get_favorite_meal() {
		return (_favorite_meal);
	}

	std::string	get_size() {
		return (_size);
	}

	std::string	get_weight() {
		return (_weight);
	}


private:

    std::string _name;
    std::string _color;
    std::string _bday;
    std::string _favorite_meal;
    std::string _size;
    std::string _weight;

};

#endif
