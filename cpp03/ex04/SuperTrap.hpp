#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public:

		using NinjaTrap::meleeAttack;
		using FragTrap::rangedAttack;
		
		SuperTrap(const std::string & name);
		SuperTrap(const SuperTrap & src);
		virtual ~SuperTrap();

		SuperTrap &	operator=(const SuperTrap & rhs);
	private:
};

#endif
