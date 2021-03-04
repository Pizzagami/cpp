#ifndef NINJATRAP_CLASS_HPP
# define NINJATRAP_CLASS_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:

		int rangedAttack(const std::string &target);
		int meleeAttack(const std::string &target);
		void ninjaShoebox(NinjaTrap &ninjatrap);
		void ninjaShoebox(ScavTrap &scavtrap);
		void ninjaShoebox(FragTrap &fragtrap);
		void ninjaShoebox(ClapTrap &claptrap);

		NinjaTrap(const std::string &  name);
		 virtual ~NinjaTrap();
		NinjaTrap(const NinjaTrap &ninjaTrap);
		NinjaTrap &operator=(const NinjaTrap &ninjatrap);

	private:

};

#endif

