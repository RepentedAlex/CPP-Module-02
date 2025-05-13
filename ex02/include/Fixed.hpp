#ifndef FIXED_HPP
#define FIXED_HPP

#include <iomanip>
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
		//Constructors
		Fixed();
		Fixed(int n);
		Fixed(float f);
		//Destructor
		~Fixed();
		//Copy
		Fixed(Fixed const &original);
		//Operator overloads
		Fixed				&operator=(Fixed const &original);
		bool				operator>(Fixed const &fixed) const;
		bool				operator<(Fixed const &fixed) const;
		bool				operator>=(Fixed const &fixed) const;
		bool				operator<=(Fixed const &fixed) const;
		bool				operator==(Fixed const &fixed) const;
		bool				operator!=(Fixed const &fixed) const;
		Fixed				operator+(Fixed const &fixed) const;
		Fixed				operator-(Fixed const &fixed) const;
		Fixed				operator*(Fixed const &fixed) const;
		Fixed				operator/(Fixed const &fixed) const;
		Fixed				&operator++();
		Fixed				operator++(int);
		Fixed				&operator--();
		Fixed				operator--(int);
		//Member functions
		int					getRawBits() const;
		void				setRawBits(int raw);
		static Fixed const	&min(Fixed const &f1, Fixed const &f2);
		static Fixed		&min(Fixed &f1, Fixed &f2);
		static Fixed const	&max(Fixed const &f1, Fixed const &f2);
		static Fixed		&max(Fixed &f1, Fixed &f2);
		float				toFloat() const;
		int					toInt() const;

	private:
		int					_rawBits;
		static const int	_decimalBit = FRACTIONAL_BITS;
};

std::ostream	&operator<<(std::ostream& os, Fixed const &fixed);

#endif //FIXED_HPP
