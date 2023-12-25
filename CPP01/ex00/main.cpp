#include "Zombie.hpp"

int main()
{
	randomChump("haha muoio");
	Zombie *allocato = newZombie("allocatore");
	allocato->announce();
	delete allocato;
    return 0;
}
