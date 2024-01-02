#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat: public Animal
{
	private:
	public:
		Cat();
		Cat(const Cat&copy);
		Cat &operator= (const Cat &assign);
		~Cat();
		void makeSound() const;
		std::string getType() const;
};

#endif
