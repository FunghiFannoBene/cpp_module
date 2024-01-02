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
		virtual void makeSound() const;
		virtual std::string getType() const;
		void changeType() const;
};

#endif
