#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define FRACTIONAL_BITS 8

class Fixed
{
	public:
		//Constructors
		Fixed();
		Fixed(int n);
		Fixed(float f);
		//Destructor
		~Fixed();
		//Copy
		Fixed(Fixed const &original);
		//Operator overloads
		Fixed			&operator=(Fixed const &original);
		//Member functions
		int				getRawBits() const;
		void			setRawBits(int raw);
		float			toFloat() const;
		int				toInt() const;

	private:
		int					_rawBits;
		static const int	_decimalBit = FRACTIONAL_BITS;
};

std::ostream	&operator<<(std::ostream& os, Fixed const &fixed);

#endif //FIXED_HPP
