#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include <iostream>

class ScavTrap
{
	public:

		void rangedAttack(const std::string &target);
		void meleeAttack(const std::string &target);
		void takeDamage(int amount);
		void beRepaired(int amount);
		void challengeNewcomer(const std::string &target);
		ScavTrap(const std::string &  name);
		~ScavTrap();
		ScavTrap(const ScavTrap &scavtrap);
		ScavTrap &operator=(const ScavTrap &scavtrap);


	private:
		
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

std::ostream & operator<<(std::ostream & o , ScavTrap const & i);

#endif

