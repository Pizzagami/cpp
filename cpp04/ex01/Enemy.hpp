#ifndef ENEMY
# define ENEMY

#include <iostream>

class Enemy
{
	public:

		Enemy();
		Enemy(int hp, std::string const &type);
		Enemy(const Enemy & src);
		virtual ~Enemy();
		
		Enemy			&operator=(const Enemy & rhs);
		int				getHP() const;
		std::string		getType() const;
		virtual void	takeDamage(int dmg);

	private:
		int				_hp;
		std::string		_type;
};

std::ostream		& operator<<(std::ostream &o , const Enemy &enemy);

#endif
