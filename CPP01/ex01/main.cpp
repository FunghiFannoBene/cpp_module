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
