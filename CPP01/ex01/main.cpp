#include "Zombie.hpp"

int main()
{
	Zombie *horde;
	int num = 5;
	horde = zombieHorde(num, "Zombie ");
	for (int i = 0; i < num; i++)
		horde[i].announce();
	delete[] horde;
}