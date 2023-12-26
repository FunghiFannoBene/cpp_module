/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:50:14 by shhuang           #+#    #+#             */
/*   Updated: 2023/12/26 19:50:15 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 7;
	Zombie *orda = zombieHorde(N ,"Booobooo");
	for(int i = 0; i < N; i++)
		orda[i].announce();
	delete[] orda;
    return 0;
}
