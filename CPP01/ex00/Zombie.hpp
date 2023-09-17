/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 04:15:10 by shhuang           #+#    #+#             */
/*   Updated: 2023/08/16 04:15:10 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
public:
	void announce( void );
	void assign_name(std::string name);
	std::string get_name();
	Zombie();
	Zombie(std::string name);
	~Zombie();
};
void randomChump(std::string str);
Zombie *newZombie(std::string str);


#endif