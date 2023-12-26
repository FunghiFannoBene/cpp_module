/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:51:54 by shhuang           #+#    #+#             */
/*   Updated: 2023/12/26 19:51:55 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		long int storeFix;
		static const int storeFract = 8;
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float afterpoint);
		Fixed(const Fixed &copy);
		Fixed &operator = (const Fixed &assign);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &storeFix);

#endif
