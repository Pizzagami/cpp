#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <math.h>
# include <iostream>

class Fixed
{
	public:
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed();
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed (const int n);
		Fixed (const float f);
		Fixed &operator=(const Fixed &fixed);

	private:
		int					_value;
		static const int	_n_bit = 8;

};

std::ostream & operator<<(std::ostream & o , Fixed const & i);

#endif

