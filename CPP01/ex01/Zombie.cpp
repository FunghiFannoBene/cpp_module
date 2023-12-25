#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "Sono stato smarmellato" << std::endl;
}

void Zombie::assignName(std::string str)
{
	this->name = str;
}

void Zombie::announce()
{
	std::cout << "Sono uno zombie, firmato: " << this->name << std::endl;
}