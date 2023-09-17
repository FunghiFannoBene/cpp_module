#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->_fixedPointValue = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed( const Fixed &r )
{
	std::cout << "Copy constructor called\n";
	this->setBits(r.getBits());
}

Fixed& Fixed::operator=( const Fixed &r)
{
	std::cout << "Copy assignment called\n";
	if(this != &r)
		this->setBits(r.getBits());
	return(*this);
}

int Fixed::getBits() const
{
	std::cout << "getRawBits member function called\n";
	return(this->_fixedPointValue);
}

void Fixed::setBits(int const raw)
{
	this->_fixedPointValue = raw;
}