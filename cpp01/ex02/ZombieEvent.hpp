#include "Zombie.hpp"

class ZombieEvent{

public:

    void setZombieType(Zombie ibmoz);
	Zombie *newZombie(std::string name);

    ZombieEvent()
    {
        std::cout  << "New Event" << std::endl;
    }

	~ZombieEvent()
    {
         std::cout  << "End of The event" << std::endl;
    }

private:
};