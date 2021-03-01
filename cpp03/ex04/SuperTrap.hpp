#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public:

		virtual int rangedAttack(const std::string &target);
		virtual int meleeAttack(const std::string &target);
		
		SuperTrap(const std::string & name);
		SuperTrap(const SuperTrap & src);
		~SuperTrap();

		SuperTrap &	operator=(const SuperTrap & rhs);
	private:
};

#endif
