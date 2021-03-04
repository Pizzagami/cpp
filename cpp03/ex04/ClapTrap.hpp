#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:

		void takeDamage(int amount);
		void beRepaired(int amount);
		std::string getname();
		ClapTrap(const std::string & name);
		ClapTrap(const ClapTrap & src);
		virtual ~ClapTrap();

		ClapTrap &	operator=(const ClapTrap & rhs);

	protected:

		std::string	_name;
		int			_hit_points;
		int			_max_hit_points;
		int			_energy_points;
		int			_max_energy_point;
		size_t		_level;
		int			_melee_attack_damage;
		int			_ranged_attack_damage;
		int			_armor_damage_reduction;
};

#endif
