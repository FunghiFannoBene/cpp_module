/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 02:28:42 by shhuang           #+#    #+#             */
/*   Updated: 2023/09/08 12:36:28 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string variable = "HI THIS IS BRAIN";
	std::string *variable_pointer = &variable;
	std::string& variable_reference = variable;

	std::cout << &variable << '\n';
	std::cout << variable_pointer << '\n';
	std::cout << &variable_reference << '\n';

	std::cout << variable << '\n';
	std::cout << *variable_pointer << '\n';
	std::cout << variable_reference << '\n';
    return 0;
}

