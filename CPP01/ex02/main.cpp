/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:50:41 by shhuang           #+#    #+#             */
/*   Updated: 2023/12/26 19:50:42 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string hi = "HI THIS IS BRAIN";
    std::string *ciao = &hi;
	std::string &ref_hi = hi;

	std::cout << &hi << ", " << ciao << ", " << &ref_hi << std::endl;
	std::cout << hi << ", " << *ciao << ", " << ref_hi << std::endl;
	return 0;
}
