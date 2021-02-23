#include "ZombieHorde.hpp"
#include <time.h>

int     main(void)
{

	srand(time(0));
	ZombieHorde *horde1 = new ZombieHorde(3);
	ZombieHorde horde2 = ZombieHorde(5);
	horde1->announce();
	horde2.announce();
	delete horde1;
	std::cout << " heureusement il reste toujours la 2 eme horde !" << std::endl; 
}

