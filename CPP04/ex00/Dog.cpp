#include "HeadAnimal.hpp"

Dog::Dog()
{
	this->type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
}

Dog &Dog::operator= (const Dog &assign)
{
	this->type = assign.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Il gatto sostitutivo ci ha lasciati\n";
}
void Dog::makeSound() const
{
	std::cout << this->type << " Wof wof\n";
}

std::string Dog::getType() const
{
	return(this->type);
}
