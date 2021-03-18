#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	private:

		std::string	_name;
		int			_apcost;
		int			_damage;

	public:

		const std::string	getName() const;
		int					getAPCost() const;
		int					getDamage() const;
		virtual void		attack() const = 0;

		AWeapon();
		AWeapon(const AWeapon & src);
		AWeapon(const std::string &name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon	& operator=(const AWeapon &aweapon);

};

#endif
