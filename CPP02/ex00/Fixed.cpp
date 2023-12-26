/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:51:39 by shhuang           #+#    #+#             */
/*   Updated: 2023/12/26 19:51:40 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():storeFix(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& assign)
{
	std::cout << "Copy assignment operator called\n";
	this->setRawBits(assign.getRawBits());
	return(*this);
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called\n";
	this->setRawBits(copy.getRawBits());
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return(storeFix);
}

void Fixed::setRawBits( int const raw )
{
	storeFix = raw;
}