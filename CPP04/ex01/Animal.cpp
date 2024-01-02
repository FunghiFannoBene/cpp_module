#include "Animal.hpp"

Animal::Animal()
{
	this->type = "animale!";
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

void Animal::makeSound() const
{
	std::cout << this->type << " broooo Animale\n";
}

Animal& Animal::operator= (const Animal &assign)
{
	if (this != &assign) 
	{
		this->type = assign.type;
	}
    return *this;
}

Animal::~Animal()
{
	std::cout << "Un animale è stato distrutto\n";
}

std::string Animal::getType() const
{
	std::cout << "??????\n";
	return("ANIMAL.\n");
}

void Animal::changeType() const
{
	const_cast<Animal*>(this)->type = "Avadacadabra";
}

void Animal::printIdea(unsigned int)
{
}