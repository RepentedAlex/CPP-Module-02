#include "Fixed.hpp"

int main( void ) {
{
Fixed a(5);
Fixed b(1);
Fixed c(12.25f);


std::cout<<"-----------------test post pre increment decrement----------------"<<std::endl;
{
std::cout<<"creating d"<<std::endl;
Fixed d;
d.setRawBits(256);
std::cout<<"creating e"<<std::endl;
Fixed e = d++;
std::cout<<std::endl<<d.getRawBits()<<"//expected 257"<<std::endl;
std::cout<<e.getRawBits()<<"//expected 256"<<std::endl;
std::cout<<"creating f"<<std::endl;
Fixed f = ++d;
std::cout<<f.getRawBits()<<"//expected 258"<<std::endl;
std::cout<<d.getRawBits()<<"//expected 258"<<std::endl;
e = --f;
std::cout<<std::endl<<e.getRawBits()<<"//expected 257"<<std::endl;
std::cout<<f.getRawBits()<<"//expected 257"<<std::endl;
d = e--;
std::cout<<std::endl<<e.getRawBits()<<"//expected 256"<<std::endl;
std::cout<<d.getRawBits()<<"//expected 257"<<std::endl;
}

std::cout<<"-----------------Comparison operator----------------"<<std::endl;
std::cout<<"b == "<<b<<"//expected 1"<<std::endl;
std::cout << (b < a) <<"//expected true"<< std::endl;
std::cout << (b > a) <<"//expected false"<< std::endl;
std::cout << (b == a) <<"//expected false"<< std::endl;
std::cout << (b >= a) <<"//expected false"<< std::endl;
std::cout << (b <= a) <<"//expected true"<< std::endl;
std::cout << (b != a) <<"//expected true"<< std::endl;
b=b+1;
std::cout<<"b == "<<b<<"//expected 2"<<std::endl;
std::cout << (b < a) <<"//expected true"<< std::endl;
std::cout << (b > a) <<"//expected false"<< std::endl;
std::cout << (b == a) <<"//expected false"<< std::endl;
std::cout << (b >= a) <<"//expected false"<< std::endl;
std::cout << (b <= a) <<"//expected true"<< std::endl;
std::cout << (b != a) <<"//expected true"<< std::endl;
b=b+1;
std::cout<<"b == "<<b<<"//expected 3"<<std::endl;
std::cout << (b < a) <<"//expected true"<< std::endl;
std::cout << (b > a) <<"//expected false"<< std::endl;
std::cout << (b == a) <<"//expected false"<< std::endl;
std::cout << (b >= a) <<"//expected false"<< std::endl;
std::cout << (b <= a) <<"//expected true"<< std::endl;
std::cout << (b != a) <<"//expected true"<< std::endl;
b=b+1;
std::cout << (b > a) <<"//expected false"<< std::endl;
b=b+1;
std::cout << (b == a) <<"//expected true"<< std::endl;
std::cout << (b >= a) <<"//expected true"<< std::endl;
std::cout << (b <= a) <<"//expected true"<< std::endl;
std::cout << (b != a) <<"//expected false"<< std::endl;
b=b+1;
std::cout<<"b == "<<b<<"//expected 6"<<std::endl;
std::cout << (b < a) <<"//expected false"<< std::endl;
std::cout << (b > a) <<"//expected true"<< std::endl;
std::cout << (b == a) <<"//expected false"<< std::endl;
std::cout << (b >= a) <<"//expected true"<< std::endl;
std::cout << (b <= a) <<"//expected false"<< std::endl;
std::cout << (b != a) <<"//expected true"<< std::endl;
b = b+1;
std::cout<<"b == "<<b<<"//expected 7"<<std::endl;
std::cout << (b < a) <<"//expected false"<< std::endl;
std::cout << (b > a) <<"//expected true"<< std::endl;
std::cout << (b == a) <<"//expected false"<< std::endl;
std::cout << (b >= a) <<"//expected true"<< std::endl;
std::cout << (b <= a) <<"//expected false"<< std::endl;
std::cout << (b != a) <<"//expected true"<< std::endl;
std::cout << b.toFloat() << std::endl;
std::cout << c.toInt() << std::endl;
std::cout << c.toFloat() << std::endl;

std::cout<<"-----------------operator----------------"<<std::endl;
std::cout<<"a, b , c current value : "<<a<<" "<<b<<" "<<c<<std::endl;
c = c * c;
std::cout << "* c == "<<c.toInt() <<"//expected 150"<< std::endl;
std::cout <<"* c == "<< c.toFloat() <<"//expected 150.0625"<< std::endl;
c = c/c;
std::cout <<"/c == "<< c.toInt() <<"//expected 1"<< std::endl;
std::cout <<"/c == "<< c.toFloat() <<"//expected 1"<< std::endl;
b = b / 4;
std::cout <<"/ b == "<< b.toInt() <<"//expected 1"<< std::endl;
std::cout << "/ b == "<< b.toFloat() <<"//expected 1.75"<<std::endl;
b = b - 1;
std::cout <<"- b == "<< b.toInt() <<"//expected 0"<< std::endl;
std::cout << "- b == "<< b.toFloat() <<"//expected 0.75"<<std::endl;

b = b + 1;

std::cout <<"+ b == "<< b.toInt() <<"//expected 1"<< std::endl;
std::cout << "+ b == "<< b.toFloat() <<"//expected 1.75"<<std::endl;


}

{
	Fixed a(10);
	Fixed b( Fixed( 25.5f ) * Fixed( 2 ) );
	std::cout << a <<"//expected 10"<< std::endl;
	std::cout << a/2 <<"//expected 5"<< std::endl;
	std::cout << a*2 <<"//expected 20"<< std::endl;
	std::cout << b.toInt() <<"//expected 51"<< std::endl;
	std::cout << b <<"//expected 51"<< std::endl;
	std::cout << b*2 <<"//expected 102"<< std::endl;
	std::cout << b/2 <<"//expected 25.5"<< std::endl;
	std::cout << b+2 <<"//expected 53"<< std::endl;
	std::cout << b-2 <<"//expected 49"<< std::endl;
	std::cout << b <<"//expected 51"<< std::endl;
	b = b + 2;
	std::cout << b.toInt() <<"//expected 53"<< std::endl;
	b = b - 4;
	std::cout << b.toInt() <<"//expected 49"<< std::endl;
}

std::cout<<"\n-------------------main 42----------------------\n"<<std::endl;
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}

/*
int main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	return (0);
}
*/
