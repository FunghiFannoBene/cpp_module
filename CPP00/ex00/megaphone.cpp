/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:26:15 by shhuang           #+#    #+#             */
/*   Updated: 2023/08/14 19:26:15 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char**argv)
{
	int i;
	int y;

	i=0;
	y=1;
	if(argc >= 2)
	{
		while(argv[y])
		{
			while(argv[y][i])
			{
				if(argv[y][i] >= 97 && argv[y][i] <= 122)
					std::cout << static_cast<char>(argv[y][i]-32);
				else
					std::cout << argv[y][i];
				i++;
			}
			i=0;
			y++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << '\n';
}