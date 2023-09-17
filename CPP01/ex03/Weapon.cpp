#include "Weapon.hpp"

Weapon::Weapon(std::string weap)
{
	this->setType(weap);
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}

std::string const Weapon::getType()
{
	return(this->type);
}