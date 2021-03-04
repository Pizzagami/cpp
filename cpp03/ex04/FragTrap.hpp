#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:

		int rangedAttack(const std::string &target);
		int meleeAttack(const std::string &target);
		void vaulthunter_dot_exe(const std::string &target);
		
		FragTrap(const std::string &  name);
		virtual ~FragTrap();
		FragTrap(const FragTrap &fragTrap);
		FragTrap &operator=(const FragTrap &fragtrap);


	private:

};

#endif

