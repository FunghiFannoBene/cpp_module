#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
	static int i = 0;
    
    std::stringstream ss;
    ss << name << " " << i;
    this->name = ss.str();
    i++;
}

Zombie::Zombie()
{
	 this->name = "";
}

Zombie::~Zombie()
{
	std::cout << this->name << " got deleted\n";
}
