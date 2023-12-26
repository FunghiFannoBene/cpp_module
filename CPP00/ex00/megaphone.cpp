/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:47:09 by shhuang           #+#    #+#             */
/*   Updated: 2023/12/26 19:47:11 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	if(argc > 1)
	{
		for (int x = 1; x < argc; x++) 
		{
			for (int i = 0; argv[x][i]; i++) 
				std::cout << static_cast<unsigned char>(std::toupper(argv[x][i]));
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
}