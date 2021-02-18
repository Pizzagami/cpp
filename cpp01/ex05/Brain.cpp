#include "Brain.hpp"

std::string Brain::identify(void) const
{
	std::stringstream addr;
	addr << this;
	return(addr.str());
}

