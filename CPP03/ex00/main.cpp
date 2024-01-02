/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 23:56:31 by shhuang           #+#    #+#             */
/*   Updated: 2024/01/02 23:56:32 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap c;
	ClapTrap C ("anf");
	c = C;
	for(int i = 0; i < 15; i++)
		c.attack("anf");
	for(int i = 0; i < 15; i++)
		C.takeDamage(0);
	for(int i = 0; i < 15; i++)
		C.attack("ClapTrap");
	for(int i = 0; i < 15; i++)
		c.takeDamage(0);
	return 0;
}
