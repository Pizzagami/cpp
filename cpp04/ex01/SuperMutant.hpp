#ifndef SUPERMUTANT
# define SUPERMUTANT

#include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:

	SuperMutant();
	SuperMutant(const SuperMutant &src);
	virtual ~SuperMutant();
	
	SuperMutant	&operator=(const SuperMutant & rhs);
	virtual void takeDamage(int dmg);
};

#endif
