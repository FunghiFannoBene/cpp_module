#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int                 _fixedPointValue;
    static const int    _fractionalBits = 8;
public:
    Fixed();
	Fixed( const Fixed &r );
	Fixed& operator=(const Fixed &r); //ritorna referenza
    ~Fixed();

	int getBits() const;
	void setBits(int const raw);
};

#endif
