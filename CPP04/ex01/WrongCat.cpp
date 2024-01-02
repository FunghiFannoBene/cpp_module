#include "HeadAnimal.hpp"

WrongCat::WrongCat()
{
	std::cout << "WRONGCAT è nato\n";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
}

WrongCat &WrongCat::operator= (const WrongCat &assign)
{
	this->type = assign.type;
	return(*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WRONGCAT DISTRUTTO\n";
}
