#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal&copy);
		WrongAnimal &operator= (const WrongAnimal &assign);
		virtual ~WrongAnimal();
		virtual void makeSound() const;
};

#endif
