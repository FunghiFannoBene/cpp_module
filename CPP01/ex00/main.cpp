/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:49:34 by shhuang           #+#    #+#             */
/*   Updated: 2023/12/26 19:49:35 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("haha muoio");
	Zombie *allocato = newZombie("allocatore");
	allocato->announce();
	delete allocato;
    return 0;
}
