#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:

		PowerFist();
		PowerFist(const PowerFist & src);
		virtual ~PowerFist();
		PowerFist &operator=(const PowerFist & rhs);
		void attack() const;
};

#endif
