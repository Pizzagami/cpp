#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	protected:

	std::string	_name;
	int			_apcost;
	int			_damage;

	public:

	const std::string	getName() const;
	int					getAPCost() const;
	int					getDamage() const;
	virtual void		attack() const = 0;
	
	Aweapon();
	Aweapon(const Aweapon & src);
	AWeapon(const std::string &name, int apcost, int damage);
	virtual ~AWeapon();
	Aweapon	& operator=(const Aweapon &aweapon);

};

#endif
