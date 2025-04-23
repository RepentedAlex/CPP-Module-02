#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(Fixed const &x, Fixed const &y);
		~Point();
		Point(Point const &original);
		Point	&operator=(Point const &original);

	private:
		Fixed const _x;
		Fixed const _y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif //POINT_HPP
