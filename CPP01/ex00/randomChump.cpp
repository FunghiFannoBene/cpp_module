#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie stack;

	stack.assignName(name);
	stack.announce();
}