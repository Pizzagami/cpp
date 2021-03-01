#ifndef DEATH_ANGELS_HPP
# define DEATH_ANGELS_HPP


#include "ISpaceMarine.hpp"

class DeathAngel : public ISpaceMarine
{
	public:
                DeathAngel();
                virtual ~DeathAngel();
                ISpaceMarine *clone();
                void battleCry() const;
                void rangedAttack() const;
                void meleeAttack() const;
};

#endif