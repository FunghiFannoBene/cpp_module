#include "HeadAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "è stato creato qualcosa di indicibile...\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &assign)
{
	this->type = assign.type;
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong animal destroyed\n";
}
void WrongAnimal::makeSound() const
{
	std::cout << "i'm a WRONG animal!\n";
}