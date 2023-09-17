/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:17:42 by prossi            #+#    #+#             */
/*   Updated: 2022/07/26 17:21:20 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) 
{
	Zombie	*heap;

	heap = newZombie("Gino_new");
	heap->announce();
	randomChump("Gianni_std::string");

	delete heap;
	return 0;
}