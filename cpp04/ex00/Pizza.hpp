#ifndef PIZZA_HPP
# define PIZZA_HPP

#include "Victim.hpp"

class Pizza : public Victim
{
	public:
	
		
		virtual void getPolymorphed() const;

		Pizza(void);
		Pizza(std::string const name);
		Pizza(const Pizza & src);
		virtual	~Pizza();

		Pizza &	operator=(const Pizza & rhs);

	private:
};

#endif
