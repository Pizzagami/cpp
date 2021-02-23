#include "Fixed.class.hpp"

Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(fixed.getRawBits());
}

Fixed::Fixed(const int n) {
	this->_value = n << this->_n_bit;
}

Fixed::Fixed(const float f) {
	this->_value = roundf(f * ( 1 << _n_bit));
}

float	Fixed::toFloat(void) const{
	return (((float)(this->_value) /  ( 1 << this->_n_bit) ) );
}

int		Fixed::toInt(void) const {
	
	return ((int)this->_value >> this->_n_bit);
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(fixed.getRawBits());
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

std::ostream & operator<<( std::ostream & o , Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}
