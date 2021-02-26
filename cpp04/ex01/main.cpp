#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main()
{
	Character* me = new Character("Joel");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me << *b;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me << *b;
	me->attack(b);
	std::cout << *me << *b;
	me->attack(b);
	std::cout << *me << *b << std::endl;

	me->equip(pr);
	std::cout << *me << *c;
	me->equip(pf);
	me->attack(c);
	std::cout << *me << *c;
	me->equip(pr);
	std::cout << *me << *c;
	me->attack(c);
	std::cout << *me << *c;
	me->attack(c);
	std::cout << *me << *c;


	delete me;
	delete b;
	delete c;
	delete pr;
	delete pf;
return 0;
}
