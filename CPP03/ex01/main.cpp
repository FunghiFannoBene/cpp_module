/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 23:56:49 by shhuang           #+#    #+#             */
/*   Updated: 2024/01/02 23:56:51 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap c;
	ClapTrap C ("anf");
	ScavTrap a ("superscavtrap");
	ScavTrap b (a);
	ScavTrap z ("z trap");
	ScavTrap u;
	
	std::cout << "\n\n\n\n";

	c = C;
	C.attack("superscavtrap");
	a.takeDamage(C.getAttackDmg());
	a.attack("anf");
	C.takeDamage(a.getAttackDmg());
	std::cout << "FATAL!\n";
	a.guardGate();

	std::cout << "\n\n\n\n";
	return 0;
}
