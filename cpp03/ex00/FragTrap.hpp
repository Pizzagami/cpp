#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include <iostream>

class FragTrap
{
	public:

		void rangedAttack(const std::string &target);
		void meleeAttack(const std::string &target);
		void takeDamage(int amount);
		void beRepaired(int amount);
		void vaulthunter_dot_exe(const std::string &target);
		FragTrap(const std::string &  name);
		~FragTrap();
		FragTrap(const FragTrap &fragTrap);
		FragTrap &operator=(const FragTrap &fragtrap);


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

#endif

