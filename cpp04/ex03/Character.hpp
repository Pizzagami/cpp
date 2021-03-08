#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class Character
{
	public:
		Character(void);
		Character(const Character & src);
		virtual	~Character();

		Character &	operator=(const Character & rhs);
	private:
};

#endif
