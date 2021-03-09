#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
	public:

		Ice(void);
		Ice(const Ice & src);
		virtual	~Ice();
		Ice &	operator=(const Ice & rhs);

		AMateria* clone() const;
		void use(ICharacter& target);

	private:
};

#endif
