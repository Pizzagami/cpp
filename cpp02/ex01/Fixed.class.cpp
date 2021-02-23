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

Fixed::Fixed(const int n) : _value(n) {
}

Fixed::Fixed(const float f) {
	this->_value = (int)roundf(f);
}

float	Fixed::toFloat(void) const{
	return (0);
}

int		Fixed::toInt(void) const {
	
	return (0);
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
