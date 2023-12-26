/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:51:01 by shhuang           #+#    #+#             */
/*   Updated: 2023/12/26 19:51:02 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	this->name = str;
	this->weap = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weap)
{
	this->weap = &weap;
}
void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weap->getType() << std::endl;
}