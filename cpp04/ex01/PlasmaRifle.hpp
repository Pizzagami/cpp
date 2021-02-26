#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:

		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle & src);
		virtual ~PlasmaRifle();
		PlasmaRifle &operator=(const PlasmaRifle &rhs);
		void attack() const;
};

#endif
