/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:51:11 by shhuang           #+#    #+#             */
/*   Updated: 2023/12/26 19:51:12 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newType)
{
	this->setType(newType);
}

Weapon::~Weapon()
{
}
const std::string& Weapon::getType()
{
	return(this->type);
}
void Weapon::setType(std::string newType)
{
	this->type = newType;
}