#include "Fixed.hpp"

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
	if (this != &original)
		this->_rawBits = original.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const &original) const
{
	return (this->_rawBits > original.getRawBits());
}

bool	Fixed::operator<(Fixed const &original) const
{
	return (this->_rawBits < original.getRawBits());
}

bool	Fixed::operator>=(Fixed const &original) const
{
	return !(*this < original);
}

bool	Fixed::operator<=(Fixed const &original) const
{
	return !(*this > original);
}

bool	Fixed::operator==(Fixed const &original) const
{
	return (this->_rawBits == original.getRawBits());
}

bool	Fixed::operator!=(Fixed const &original) const
{
	return (this->_rawBits != original.getRawBits());
}

Fixed Fixed::operator+(Fixed const &original) const
{
	return Fixed(this->toFloat() + original.toFloat());
}

Fixed Fixed::operator-(Fixed const &original) const
{
	return Fixed(this->toFloat() - original.toFloat());
}

Fixed Fixed::operator*(Fixed const &original) const
{
	return Fixed(this->toFloat() * original.toFloat());
}

Fixed Fixed::operator/(Fixed const &original) const
{
	return Fixed(this->toFloat() / original.toFloat());
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	this->_rawBits += 1;
	return (tmp);
}

Fixed	&Fixed::operator++()
{
	this->_rawBits += 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	this->_rawBits -= 1;
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	this->_rawBits -= 1;
	return (*this);
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
Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed const	&Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

Fixed const	&Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

float	Fixed::toFloat() const
{
	return ((float)(this->_rawBits) / (float)(1 << _decimalBit));
}

int		Fixed::toInt() const
{
	return ((int)this->_rawBits / (1 << FRACTIONAL_BITS));
}

std::ostream	&operator<<(std::ostream& os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}

