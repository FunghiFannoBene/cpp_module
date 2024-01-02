#include "HeadAnimal.hpp"

int main()
{
	Animal *animals[100];
	//Animal a;
	for(int i = 0; i < 50; i++) 
	{
		animals[i] = new Dog();
		animals[i]->makeSound();
		animals[i]->printIdea(i);
	}
    for(int i = 50; i < 100; i++) 
	{
        animals[i] = new Cat();
        animals[i]->makeSound();
		animals[i]->printIdea(i);
    }
	for (int i = 0; i < 50; i++) {
		delete animals[i]; // Deallocare ogni oggetto Dog
	}

	for (int i = 50; i < 100; i++) {
		delete animals[i]; // Deallocare ogni oggetto Cat
	}
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
return 0;
}