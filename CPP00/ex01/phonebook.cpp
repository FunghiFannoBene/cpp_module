#include "PhoneBook.hpp"

void check_cin()
{
	if (std::cin.fail()) 
	{
		if (std::cin.eof()) 
		{
			std::cout << "Ctrl + D : Exit;" << std::endl;
			exit(0);
		}
		else 
			std::cin.clear();
	}
}

int main()
{
	PhoneBook rubrica;
	std::string command;
	int i = 0;
	rubrica.size = 0;
	std::system("clear");

	while(1)
	{
		std::cout << "SuperRubrica> SELEZIONA: ADD, SEARCH, EXIT\n";
		command.clear();
		std::getline(std::cin, command);
		if (std::cin.fail()) 
		{
			if (std::cin.eof()) 
			{
				std::cout << "Ctrl + D : Exit;" << std::endl;
				exit(0);
			}
			else 
				std::cin.clear();
		}
		if(command == "EXIT")
			return(1);
		if(command == "ADD")
		{
			std::system("clear");
			i = rubrica.size-1;
			while(i >= 0)
			{
				if(i == 7)
				{
					i--;
					continue;
				}
				rubrica.contatti[i+1] = rubrica.contatti[i];
				i--;
			}
			rubrica.contatti[0].getInfo();
			if(rubrica.size <= 7)
				rubrica.size++;
		}
		else if(command == "SEARCH")
		{
			i=0;
			std::system("clear");
			if(rubrica.size == 0)
				std::cout << "No data.\n";
			else
			{
				while(1)
				{
					std::string ID;
					i=0;
					std::cout << "| ID      |Nome      |Cognome   |Nickname  |\n";
					while(i < rubrica.size)
					{
						std::cout << "| ID." << (i+1) << "    ";
						rubrica.contatti[i].formatPrint();
						std::cout << std::endl;
						i++;
					}
					std::cout << "\n\nSeleziona un ID per stampare o 9 per tornare al main.\n";
					std::getline(std::cin, ID);
					if (std::cin.fail()) 
					{
						if (std::cin.eof()) 
						{
							std::cout << "Ctrl + D : Exit;" << std::endl;
							exit(0);
						}
						else 
							std::cin.clear();
					}
					if(atoi(ID.c_str()) == 9)
					{
						std::system("clear");
						break;
					}
					if(atoi(ID.c_str()) > rubrica.size || atoi(ID.c_str()) == 0)
					{
						std::system("clear");
						std::cout << "Inserire ID corretto o 9 per tornare al main. \n\nELENCO ID:\n\n\n";
					}
					else
						rubrica.contatti[atoi(ID.c_str())-1].printObj();
					continue;
				}
			}
		}
		else
		{
			std::system("clear");
			std::cout << "Command not valid.\n" << std::endl;
		}
		i = 0;
	}
}