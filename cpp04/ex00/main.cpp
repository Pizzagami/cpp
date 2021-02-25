#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Pizza.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Pizza ronie("Ronie");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(ronie);

	return 0;
}
