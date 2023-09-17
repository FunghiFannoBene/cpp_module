#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_b(name)
{
	this->weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << this->name_b << " attacks with their " << this->weapon->getType() << '\n';;
}