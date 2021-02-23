#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent{

public:

    void setZombieType();
    void randomType();
	Zombie      *newZombie(std::string name);
    void        randomChump();

    ZombieEvent()
    {
        std::cout  << "New Event" << std::endl;
    }

	~ZombieEvent()
    {
         std::cout  << "End of The event" << std::endl;
    }

    private:

        std::string _type;
};

#endif
