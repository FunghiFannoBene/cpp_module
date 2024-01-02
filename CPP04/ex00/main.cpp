#include "HeadAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* zeta = meta;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	zeta->makeSound();
	zeta->changeType();
	zeta->makeSound();
	meta->makeSound();

	const WrongAnimal *animal = new WrongAnimal();
	const WrongAnimal  *cat = new WrongCat();

	animal->makeSound();
	cat->makeSound();

	delete j;
	delete i;
	delete zeta;
	delete animal;
	delete cat;

return 0;
}