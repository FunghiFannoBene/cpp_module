#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << "Debugging...! shut up!\n";
}
void Harl::info()
{
	std::cout << "Do you need info? Search it alone.\n";
}
void Harl::warning()
{
	std::cout << "Hey, don't disturb me!\n";
}
void Harl::error()
{
	std::cout << "The only error is you.\n";
}

void Harl::complain(std::string level)
{
	puntatore_a_funzioni funzioniDiHarl[] = {&Harl::debug,  &Harl::info, &Harl::warning, &Harl::error};
	std::string commands[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while(i < 4 && commands[i].compare(level))
		i++;
	if(i < 4)
		((*this).*funzioniDiHarl[i])();
}