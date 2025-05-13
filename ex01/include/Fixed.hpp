#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define PRINT_42 \
do \
{ \
	std::cout << __PRETTY_FUNCTION__ << "\t called" << std::endl; \
} \
while (0)

#define FRACTIONAL_BITS 8

class Fixed
{
	public:
		// Constructors
			Fixed();
			Fixed(int n);
			Fixed(float f);
			Fixed(Fixed const &original);
		// Destructors
			~Fixed();
		// Operator overloads
			Fixed			&operator=(Fixed const &original);
		// Getters
			int				getRawBits() const;
		// Setters
			void			setRawBits(int raw);
		// Member functions
			float			toFloat() const;
			int				toInt() const;

	private:
		int					_rawBits;
		static const int	_decimalBit = FRACTIONAL_BITS;
};

std::ostream	&operator<<(std::ostream& os, Fixed const &fixed);

#endif //FIXED_HPP
