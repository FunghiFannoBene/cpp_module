#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *zombie = new Zombie();
	zombie->assignName(name);
	return(zombie);
}