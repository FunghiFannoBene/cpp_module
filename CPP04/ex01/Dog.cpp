#include "HeadAnimal.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << this->type;
	this->brain = new Brain();
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
	delete brain;
	std::cout << "Il gatto(cane) sostitutivo ci ha lasciati\n";
}
void Dog::makeSound() const
{
	std::cout << this->type << " Wof wof\n";
}

std::string Dog::getType() const
{
	return(this->type);
}

void Dog::printIdea(unsigned int idea)
{
	std::cout << "dog idea... ";
	if(brain)
		brain->printIdea(idea);
}