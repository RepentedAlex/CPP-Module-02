#include "Fixed.hpp"

#include <iomanip>

#define PRINT_42	\
do {	\
std::cout << __PRETTY_FUNCTION__ << "\t called" << std::endl;  \
} while (0)

Fixed::Fixed() : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = n * (1 << _decimalBit);
}

Fixed::Fixed(float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(f * (1 << _decimalBit));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &original)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed			&Fixed::operator=(Fixed const &original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &original)
		this->_rawBits = original.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const
{
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
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

