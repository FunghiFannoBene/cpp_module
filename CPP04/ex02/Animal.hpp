#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal&copy);
		Animal &operator= (const Animal &assign);
		virtual ~Animal();
		virtual void makeSound() const = 0;
		virtual std::string getType() const;
		void changeType() const;
		virtual void printIdea(unsigned int idea) = 0;
};

#endif
