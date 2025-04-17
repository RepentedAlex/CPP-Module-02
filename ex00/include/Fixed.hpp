#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &original);
		Fixed	&operator=(Fixed const &original);
		int		getRawBits() const;
		void	setRawBits(int raw);

	private:
		int					_rawBits;
		static const int	_decimalBit = 8;
};

#endif //FIXED_HPP
