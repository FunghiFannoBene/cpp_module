#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::assign_name(std::string str)
{
	this->name = str;
}

Zombie::Zombie()
{
	this->assign_name("Noname");
}

Zombie::Zombie(std::string str)
{
	this->assign_name(str);
}

Zombie::~Zombie()
{
	std::cout << name << ": Il zombie è stato purificato.\n";
}

std::string Zombie::get_name()
{
	return(this->name);
}