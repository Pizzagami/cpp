#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		void rangedAttack(const std::string &target);
		void meleeAttack(const std::string &target);
		void challengeNewcomer(const std::string &target);
		ScavTrap(const std::string &  name);
		~ScavTrap();
		ScavTrap(const ScavTrap &scavtrap);
		ScavTrap &operator=(const ScavTrap &scavtrap);


	private:
		
};


#endif

