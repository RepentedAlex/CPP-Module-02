#include "Fixed.hpp"

#include <iomanip>

///CONSTRUCTORS/////////////////////////////////////////////////////////////////
Fixed::Fixed() : _rawBits(0)
{
	PRINT_42;
}

Fixed::Fixed(const int n)
{
	PRINT_42;
	this->_rawBits = n * (1 << _decimalBit);
}

Fixed::Fixed(float f)
{
	PRINT_42;
	this->_rawBits = roundf(f * (1 << _decimalBit));
}

Fixed::Fixed(Fixed const &original)
{
	PRINT_42;
	*this = original;
}

///DESTRUCTORS//////////////////////////////////////////////////////////////////
Fixed::~Fixed()
{
	PRINT_42;
}

///OPERATOR OVERLOADS///////////////////////////////////////////////////////////
Fixed	&Fixed::operator=(Fixed const &original)
{
	PRINT_42;
	if (this != &original)
		this->_rawBits = original.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream& os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}

///GETTERS//////////////////////////////////////////////////////////////////////
int		Fixed::getRawBits() const
{
	return (this->_rawBits);
}

///SETTERS//////////////////////////////////////////////////////////////////////
void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

///MEMBER FUNCTIONS/////////////////////////////////////////////////////////////
float	Fixed::toFloat() const
{
	return ((float)(this->_rawBits) / (float)(1 << _decimalBit));
}

int		Fixed::toInt() const
{
	return ((int)this->_rawBits / (1 << _decimalBit));
}

