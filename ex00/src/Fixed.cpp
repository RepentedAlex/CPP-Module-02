#include "Fixed.hpp"

///CONSTRUCTORS/////////////////////////////////////////////////////////////////
Fixed::Fixed() : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &original)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

///DESTRUCTORS//////////////////////////////////////////////////////////////////
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

///OPERATOR OVERLOADS///////////////////////////////////////////////////////////
Fixed	&Fixed::operator=(Fixed const &original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &original)
		this->_rawBits = original.getRawBits();
	return (*this);
}

///GETTERS//////////////////////////////////////////////////////////////////////
int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

///SETTERS//////////////////////////////////////////////////////////////////////
void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
}
