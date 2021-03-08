#ifndef ICE_HPP
# define ICE_HPP

class Ice
{
	public:
		Ice(void);
		Ice(const Ice & src);
		virtual	~Ice();

		Ice &	operator=(const Ice & rhs);
	private:
};

#endif
