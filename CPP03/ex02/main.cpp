/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 23:57:21 by shhuang           #+#    #+#             */
/*   Updated: 2024/01/02 23:57:22 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap c;
	ScavTrap s;
	FragTrap f;

	c.attack("s");
	s.attack("f");
	f.highFivesGuys();
	f.attack("c");

	FragTrap b(f);
	FragTrap g = b;
	
}
