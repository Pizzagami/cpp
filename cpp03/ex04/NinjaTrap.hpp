#ifndef NINJATRAP_CLASS_HPP
# define NINJATRAP_CLASS_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public:

		int rangedAttack(const std::string &target);
		int  meleeAttack(const std::string &target);
		void ninjaShoebox(NinjaTrap &ninjatrap);
		void ninjaShoebox(ScavTrap &scavtrap);
		void ninjaShoebox(FragTrap &fragtrap);
		void ninjaShoebox(ClapTrap &claptrap);

		NinjaTrap(const std::string &  name);
		~NinjaTrap();
		NinjaTrap(const NinjaTrap &ninjaTrap);
		NinjaTrap &operator=(const NinjaTrap &ninjatrap);

	private:

};

std::ostream & operator<<(std::ostream & o , NinjaTrap const & i);

#endif

