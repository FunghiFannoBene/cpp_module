#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}
void Harl::debug(void)
{
	std::cout << "Debuggare fa schifo, fallo tu.\n";
}
void Harl::info(void)
{
	std::cout << "Info?? Cercatele su google!\n";
}
void Harl::warning(void)
{
	std::cout << "Giusto un pochetto...\n";
}
void Harl::error(void)
{
	std::cout << "Nessun errore, tu hai errori.\n";
}

void Harl::complain( std::string level )
{
	std::string cmd[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	pointerFunctionArray[0]= &Harl::debug;
	pointerFunctionArray[1]= &Harl::info;
	pointerFunctionArray[2]= &Harl::warning;
	pointerFunctionArray[3]= &Harl::error;

	while(i < 4 && level.compare(cmd[i]))
		i++;
	if(i < 4)
	{
		Harl harlInstance;
		(harlInstance.*pointerFunctionArray[i])();
	}
}