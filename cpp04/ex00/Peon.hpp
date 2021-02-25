#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
	public:

		virtual void getPolymorphed() const;

		Peon(void);
		Peon(const std::string &name);
		Peon(const Peon & src);
		virtual	~Peon();

		Peon &	operator=(const Peon & rhs);

	private:
};

#endif
