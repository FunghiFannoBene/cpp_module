/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:52:04 by shhuang           #+#    #+#             */
/*   Updated: 2023/12/26 19:52:05 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//------------------------------------------Constructior------------------------------------------


Fixed::Fixed():storeFix(0)
{
}

Fixed::Fixed(float point)
{
	this->storeFix = roundf(point * (1 << this->storeFract));
}

Fixed::Fixed(int num)
{
	this->storeFix = num << this->storeFract;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}


//-----------------------------------------Operators-----------------------------------------


Fixed &Fixed::operator= (const Fixed &assign)
{
	setRawBits(assign.getRawBits());
	return(*this);
}

bool Fixed::operator != (const Fixed &cmp) const
{
	if(cmp.storeFix != this->storeFix)
		return(true);
	else
		return(false);
}

bool Fixed::operator == (const Fixed &cmp) const
{
	if(cmp.storeFix == this->storeFix)
		return(true);
	else
		return(false);
}

bool Fixed::operator >= (const Fixed &cmp) const
{
	if(cmp.storeFix >= this->storeFix)
		return(true);
	else
		return(false);
}

bool Fixed::operator <= (const Fixed &cmp) const
{
	if(cmp.storeFix <= this->storeFix)
		return(true);
	else
		return(false);
}

bool Fixed::operator > (const Fixed &cmp) const
{
	if(cmp.storeFix > this->storeFix)
		return(true);
	else
		return(false);
}

bool Fixed::operator < (const Fixed &cmp) const
{
	if(cmp.storeFix < this->storeFix)
		return(true);
	else
		return(false);
}


//---------------------------------------Aritmetic operator------------------------------------------

Fixed Fixed::operator+(const Fixed &add) const
{
    Fixed result;
    result.setRawBits((this->storeFix + add.storeFix) >> storeFract);
    return result;
}

Fixed Fixed::operator-(const Fixed &substract) const
{
	return(Fixed(static_cast<float>(this->storeFix-substract.storeFix) / ( 1 <<  storeFract)));
}

Fixed Fixed::operator*(const Fixed &multiply) const
{
	Fixed result;
    result.setRawBits((this->storeFix * multiply.storeFix) >>  storeFract);
	result.toFloat();
    return result;
}

Fixed Fixed::operator/(const Fixed &divide) const
{
	Fixed result;
    result.setRawBits((this->storeFix / divide.storeFix) >>  storeFract);
	result.toFloat();
    return result;
}



//---------------------------------Incremental-Decremental operator--------------------------------------

Fixed Fixed::operator++()
{
	storeFix ++;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed act(*this);
	++(*this);
	return(act);
}

Fixed Fixed::operator--()
{
	storeFix --;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed act(*this);
	--(*this);
	return(act);
}

//-----------------------------------------Destructor-------------------------------------------

Fixed::~Fixed()
{
}

//------------------------------------------Method-------------------------------------------


int Fixed::getRawBits() const
{
	return(this->storeFix);
}

void Fixed::setRawBits(int const raw)
{
	this->storeFix = raw;
}
int Fixed::toInt(void) const
{
	return(this->storeFix >> this->storeFract);
} 

float Fixed::toFloat(void) const
{
	return(static_cast<float>(this->storeFix) / ( 1 <<  storeFract));
}

std::ostream &operator<<(std::ostream &out, const Fixed &storeFix)
{
	out << storeFix.toFloat();
	return(out); 
}

//------------------------------------------Max-min compare-------------------------------------------


const Fixed &Fixed::max(const Fixed &cmp1, const Fixed &cmp2)
{
	if(cmp1.storeFix > cmp2.storeFix)
		return(cmp1);
	return(cmp2);
}

const Fixed &Fixed::min(const Fixed &cmp1, const Fixed &cmp2)
{
	if(cmp1.storeFix < cmp2.storeFix)
		return(cmp1);
	return(cmp2);
}

Fixed &Fixed::max(Fixed &cmp1, Fixed &cmp2)
{
	if(cmp1.storeFix > cmp2.storeFix)
		return(cmp1);
	return(cmp2);

}
Fixed &Fixed::min(Fixed &cmp1, Fixed &cmp2)
{
	if(cmp1.storeFix < cmp2.storeFix)
		return(cmp1);
	return(cmp2);
}