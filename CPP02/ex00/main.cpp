#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c=b;
	std::cout << a.getBits() << '\n';
	std::cout << b.getBits() << '\n';
	std::cout << c.getBits() << '\n';
    return 0;
}
