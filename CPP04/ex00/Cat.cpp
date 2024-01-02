#include "HeadAnimal.hpp"

Cat::Cat()
{
	this->type = "Cat";
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