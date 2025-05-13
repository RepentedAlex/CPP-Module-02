#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

#define PRINT_42 \
do \
{ \
	std::cout << __PRETTY_FUNCTION__ << "\t called" << std::endl; \
} \
while (0)

class Fixed
{
	public:
		// Constructors
			Fixed();
			Fixed(Fixed const &original);
		// Destructors
			~Fixed();
		// Operator overloads
			Fixed	&operator=(Fixed const &original);
		// Getters
			int		getRawBits() const;
		// Setters
			void	setRawBits(int raw);

	private:
		int					_rawBits;
		static const int	_decimalBit = 8;
};

#endif //FIXED_HPP
