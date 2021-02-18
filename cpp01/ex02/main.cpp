#include "ZombieEvent.hpp"

int main(void)
{
    srand (time(NULL));
	Zombie		*zh1;
	Zombie		*zh2;
    ZombieEvent  ze;

	zh1 = ze.newZombie(std::string("zh1"));
	ze.randomChump();
	ze.randomChump();
	ze.randomChump();
	zh2 = ze.newZombie(std::string("zh2"));
	delete zh2;
	ze.randomChump();
	zh2 = ze.newZombie(std::string("zh2"));
	delete zh1;
	delete zh2;
    return 0;
}