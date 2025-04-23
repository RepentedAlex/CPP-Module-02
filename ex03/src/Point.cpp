#include "Point.hpp"

#define PRINT_42  \
	do {                  \
	std::cout << __PRETTY_FUNCTION__ << "\t called" << std::endl;  \
	} while (0)

Point::Point() : _x(0), _y(0)
{
	PRINT_42;
}

Point::Point(Fixed const &x, Fixed const &y) : _x(x), _y(y)
{
	PRINT_42;
}


Point::~Point()
{
	PRINT_42;
}

Point::Point(Point const &original)
{
	PRINT_42;
	*this = original;
}

Point	&Point::operator=(Point const &original)
{
	PRINT_42;
	if (this != &original)
		*this = original;
	return (*this);
}


