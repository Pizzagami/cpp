#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure & src);
		virtual	~Cure();
		Cure &	operator=(const Cure & rhs);

		AMateria* clone() const;
	void use(ICharacter& target);
	private:
};

#endif
