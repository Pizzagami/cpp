#include "FragTrap.hpp"
#include <time.h>

int main(void)
{
	srand(time(0));
	FragTrap clank = FragTrap("Clank");
	FragTrap cl4ptrap = FragTrap("Claptrap");

	clank.meleeAttack("bandit");
	cl4ptrap.rangedAttack("strairs");
	clank.takeDamage(50);
	clank.beRepaired(20);
	clank.takeDamage(80);
	clank.beRepaired(500);
	clank.takeDamage(500);
	clank.beRepaired(10);
	clank.takeDamage(10);
	cl4ptrap.vaulthunter_dot_exe("stairs");
	cl4ptrap.vaulthunter_dot_exe("Jack");
	cl4ptrap.vaulthunter_dot_exe("Etallon du cul");
}
