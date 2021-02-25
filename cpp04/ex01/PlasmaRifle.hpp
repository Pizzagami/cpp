#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:

		PlasmaRifle();

		virtual ~PlasmaRifle();
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle & src);
		PlasmaRifle &operator=(const PlasmaRifle &rhs);
		void attack() const;
};

#endif
