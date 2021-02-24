#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <time.h>

int main(void)
{
	srand(time(0));
	ScavTrap	clank = ScavTrap("Clank");
	FragTrap	cl4ptrap = FragTrap("Claptrap");
	ClapTrap	mother = ClapTrap("Momy");
	NinjaTrap	yamato = NinjaTrap("Yamato");
	NinjaTrap	sakurabot = NinjaTrap("Sakurabot");

	clank.meleeAttack("bandit");
	cl4ptrap.rangedAttack("strairs");
	clank.takeDamage(50);
	clank.beRepaired(20);
	clank.takeDamage(80);
	clank.beRepaired(500);
	clank.takeDamage(500);
	clank.beRepaired(10);
	clank.takeDamage(10);
	cl4ptrap.vaulthunter_dot_exe("Stairs");
	cl4ptrap.vaulthunter_dot_exe("Jack");
	cl4ptrap.vaulthunter_dot_exe("Tiny Tina");
	clank.challengeNewcomer("Athena");
	clank.challengeNewcomer("Bandit");
	clank.challengeNewcomer("Gaige");
	yamato.ninjaShoebox(mother);
	yamato.ninjaShoebox(clank);
	yamato.ninjaShoebox(cl4ptrap);
	yamato.ninjaShoebox(sakurabot);
}
