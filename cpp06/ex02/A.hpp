#ifndef A_HPP
# define A_HPP

#include "Base.hpp"

class A : public Base
{
	public:
	A();
	virtual ~A();
	A(const A &a);
	A &operator=(const A &a);
};

#endif