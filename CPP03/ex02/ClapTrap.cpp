/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 23:57:08 by shhuang           #+#    #+#             */
/*   Updated: 2024/01/02 23:57:09 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("ClapTrap"), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << this->name << " has spawned\n";
}

ClapTrap::ClapTrap(std::string name):name(name), hitPoint(10), energyPoint(10), attackDamage(0) 
{
}

ClapTrap::ClapTrap(std::string name, int hit, int energy, int attackdmg):name(name), hitPoint(hit), energyPoint(energy), attackDamage(attackdmg) 
{
	std::cout << this->name << " has spawned\n";
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &assign)
{
	if(this != &assign)
	{
		name = assign.name;
		energyPoint = assign.energyPoint;
		hitPoint = assign.hitPoint;
		attackDamage = assign.attackDamage;
	}
	return(*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " has been destroyed\n";
}

void ClapTrap::attack(const std::string &target)
{
	if(energyPoint && (hitPoint > 0))
	{
		this->energyPoint--;
		std::cout << this->name << " attacks " << target << ", " << "causing " << this->attackDamage << " points of damage!\n";
	}
	else
		std::cout << "No energy\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->hitPoint > 0)
	{
		std::cout << this->name << " has taken " << amount << " damage.\n";
		this->hitPoint-=amount;
		if(this->hitPoint < 0)
			std::cout << this->name << " is not among us anymore\n";
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(energyPoint && (hitPoint > 0))
	{
		this->energyPoint--;
		std::cout << "Repairing... restored: " << amount << " hit point\n";
		this->hitPoint+=amount;
	}
	else
		std::cout << "No energy\n";
}

int ClapTrap::getAttackDmg()
{
	return(this->attackDamage);
}