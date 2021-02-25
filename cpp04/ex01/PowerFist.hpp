#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:

		PowerFist();

		virtual ~PowerFist();
		PowerFist();
		PowerFist(const PowerFist & src);
		PowerFist &operator=(const PowerFist & rhs);
		void attack() const;
};

#endif
