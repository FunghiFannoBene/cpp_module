/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:52:07 by shhuang           #+#    #+#             */
/*   Updated: 2023/12/26 19:52:08 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int storeFix;
		static const int storeFract = 8;
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float point);
		Fixed(const Fixed &copy);
		Fixed &operator= (const Fixed &assign);
		~Fixed();

		bool operator > (const Fixed &cmp) const;
		bool operator >= (const Fixed &cmp) const;
		bool operator < (const Fixed &cmp) const;
		bool operator <= (const Fixed &cmp) const;
		bool operator == (const Fixed &cmp) const;
		bool operator != (const Fixed &cmp) const;


		Fixed operator+(const Fixed &add) const;
		Fixed operator-(const Fixed &substract) const;
		Fixed operator*(const Fixed &multiply) const;
		Fixed operator/(const Fixed &divide) const;



		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);



		Fixed operator ++ (void);
		Fixed operator ++ (int);
		Fixed operator -- (void);
		Fixed operator -- (int);

		int	getRawBits() const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

};

std::ostream &operator<<(std::ostream &out, const Fixed &storeFix);

#endif
