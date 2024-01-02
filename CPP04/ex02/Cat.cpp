#include "HeadAnimal.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << this->type;
	this->brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
}

Cat &Cat::operator= (const Cat &assign)
{
	this->type = assign.type;
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "UN GATTO è ASCESO\n";
}

void Cat::makeSound() const
{
	std::cout << this->type << " miao miao\n";
}

std::string Cat::getType() const
{
	return(this->type);
}

void Cat::printIdea(unsigned int idea)
{
	if (brain)
		brain->printIdea(idea);
}