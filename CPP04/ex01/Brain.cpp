#include "HeadAnimal.hpp"

Brain::Brain() {
    for (int i = 0; i < 100; i++) 
	{
        std::ostringstream oss;
        oss << "Idea " << i << "\n";
        this->ideas[i] = oss.str();
		oss.str("");
		oss.clear();
    }
    std::cout << "Brain constructed\n";
}

Brain::Brain(const Brain &copy)
{
	*this = copy; //usa l'operatore di assegnazione
}

Brain &Brain::operator= (const Brain &assign)
{
	if(this != &assign)
		std::copy(assign.ideas, assign.ideas + 100, this->ideas);
	return(*this);
}

Brain::~Brain()
{
}

void Brain::printIdea(unsigned int idea)
{
	if(idea < 100)
		std::cout << ideas[idea];
	else
		std::cout << "My brain isn't THAT Big!!\n";
}
