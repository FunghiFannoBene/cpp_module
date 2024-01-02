#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>

class WrongCat : public WrongAnimal
{
	private:
	public:
		WrongCat();
		WrongCat(const WrongCat&copy);
		WrongCat &operator= (const WrongCat &assign);
		~WrongCat();
};

#endif
