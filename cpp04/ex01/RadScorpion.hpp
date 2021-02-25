#ifndef RADSCORPION
# define RADSCORPION

# include "Enemy.hpp"

class RadScorpion: public Enemy
{

	public:

	RadScorpion();
	RadScorpion(const RadScorpion &src);
	virtual ~RadScorpion();
	
	RadScorpion	&operator=(const RadScorpion & rhs);
};

#endif
