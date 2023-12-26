/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:50:25 by shhuang           #+#    #+#             */
/*   Updated: 2023/12/26 19:50:26 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "Sono stato smarmellato" << std::endl;
}

void Zombie::assignName(std::string str)
{
	this->name = str;
}

void Zombie::announce()
{
	std::cout << "Sono uno zombie, firmato: " << this->name << std::endl;
}