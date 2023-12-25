#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->name;
	std::cout << " non esiste più, per sempre.\n";
}

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::assignName(std::string str)
{
	this->name = str;
}

