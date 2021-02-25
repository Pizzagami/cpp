#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	public:

		Character();
		Character(std::string const &name);
		Character(const Character &src);
		virtual ~Character();

		Character	&operator=(const Character & rhs);

		void		recoverAP();
		void		equip(AWeapon *weapon);
		void		attack(Enemy *enemy);
		std::string	getName() const;
		int			getAP() const;
		AWeapon		*getWeapon() const;

	private:

		std::string	_name;
		int			_ap;
		AWeapon		*_weapon;
};

std::ostream		& operator<<(std::ostream &output, const Character &character);

#endif
