#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *orda = new Zombie[N];

	for(int i = 0; i < N; i++)
	{
		orda[i].assignName(name);
	}
	return(orda);
}