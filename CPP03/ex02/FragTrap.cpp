/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 23:57:14 by shhuang           #+#    #+#             */
/*   Updated: 2024/01/02 23:57:15 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string names) :ClapTrap(names)
{
	this->attackDamage = 30;
	this->energyPoint = 100;
	this->hitPoint = 100;
	std::cout << this->name << "Model:FragTrap stat( ATK: " << this->attackDamage << 
	"HP: " << this->hitPoint << "Energy: " << this->energyPoint << " )\n";
}

FragTrap::FragTrap() :ClapTrap("DefaultFRAGTRAP")
{
	this->attackDamage = 30;
	this->energyPoint = 100;
	this->hitPoint = 100;
	std::cout << this->name << " Model:FragTrap stat( ATK: " << this->attackDamage << 
	" HP: " << this->hitPoint << " Energy: " << this->energyPoint << " )\n";
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
}

FragTrap &FragTrap::operator= (const FragTrap &assign)
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

FragTrap::~FragTrap()
{
	std::cout << this->name << " FragTrap distrutto.\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->name << "Launched a positive High five\n";
}
