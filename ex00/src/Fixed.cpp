#include "Fixed.hpp"

///CONSTRUCTORS/////////////////////////////////////////////////////////////////
Fixed::Fixed() : _rawBits(0)
{
	PRINT_42;
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

///GETTERS//////////////////////////////////////////////////////////////////////
int		Fixed::getRawBits() const
{
	PRINT_42;
	return (this->_rawBits);
}

///SETTERS//////////////////////////////////////////////////////////////////////
void	Fixed::setRawBits(int const raw)
{
	PRINT_42;
	this->_rawBits = raw;
}
