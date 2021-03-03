#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde{

	public:

		Zombie	new_rand_zombie(void);
		void	announce(void);

		ZombieHorde(int n) : _nbz(n)
	{
		this->_horde = new Zombie[n];
		while (n)
		{
			n--;
			this->_horde[n] = new_rand_zombie();
		}
	}

		~ZombieHorde()
		{
			delete [] this->_horde;
			std::cout << " La horde a ete annihilee" << std::endl;
		}

	private:

		const int _nbz;
		Zombie	*_horde;

};

#endif
