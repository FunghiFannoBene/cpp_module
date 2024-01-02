/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 23:57:26 by shhuang           #+#    #+#             */
/*   Updated: 2024/01/02 23:57:27 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("base nameSCAV" ,100, 50, 20)
{
	std::cout << "Ho costruito un SCAVTRAP! Un " << name << ".\n";
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100 , 50, 20)
{
	std::cout << "Erede Scav full name stronger than it's parent: " << this->name << " con ben " << this->attackDamage << " di ATK DMG!!!\n";
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign)
{
	if(this != &assign)
	{
		this->name = assign.name;
		this->attackDamage = assign.attackDamage;
		this->energyPoint = assign.energyPoint;
		this->hitPoint = assign.hitPoint;
	}
	return(*this);
}

void ScavTrap::guardGate()
{
	std::cout << "Gate keeper mode!!\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Ho distrutto un " << this->name <<"!\n";
}

void ScavTrap::attack(std::string target)
{
	std::cout << this->name << " is very powerful " << this->attackDamage << " is insane! ScavTrap attacks " << target << "!\n";
}
