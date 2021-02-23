#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <math.h>
# include <iostream>

class Fixed
{
	public:
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		Fixed();
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);

	private:
		int					_value;
		static const int	_n_bit = 8;

};

#endif

