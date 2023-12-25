#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	this->name = str;
	this->weap = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weap)
{
	this->weap = &weap;
}
void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weap->getType() << std::endl;
}