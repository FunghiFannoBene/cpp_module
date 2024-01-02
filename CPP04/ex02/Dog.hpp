#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const Dog&copy);
		Dog &operator= (const Dog &assign);
		~Dog();
		void makeSound() const;
		std::string getType() const;
		void printIdea(unsigned int idea);
};

#endif
