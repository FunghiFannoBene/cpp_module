/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:51:51 by shhuang           #+#    #+#             */
/*   Updated: 2023/12/26 19:51:52 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed():storeFix(0)
{

}
Fixed::Fixed(const int num):storeFix(num << storeFract) //operazione per "ingigantire il numero" in modo da permettere operazioni-
{
}

Fixed::Fixed(const float afterpoint):storeFix(roundf(afterpoint * (1 << storeFract))) //<< non può essere applicato ai numeri float
{
}

Fixed::~Fixed()
{
}
Fixed::Fixed(const Fixed &copy)
{
	*this = copy; //mi copio il fixed passato? o punto allo stesso?
}

Fixed &Fixed::operator = (const Fixed &assign)
{
	setRawBits(assign.getRawBits()); //setto i valori privati dell'oggetto
	return(*this);
}

int		Fixed::getRawBits(void) const
{
	return(storeFix);
}
void	Fixed::setRawBits(int const raw)
{
	storeFix = raw;
}
float Fixed::toFloat( void ) const
{
	return(static_cast<float>(storeFix) / (1 << storeFract)); //torno a originale come float
}
int Fixed::toInt( void ) const
{
	return(storeFix >> storeFract); //torno a originale come int
}

std::ostream &operator<<(std::ostream &out, const Fixed &Fixed) //"assegno" il comportamento personalizzato all'operatore << per gestire oggetti Fixed
{
	out << Fixed.toFloat();
	return(out);
}