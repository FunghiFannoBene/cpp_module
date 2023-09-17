/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 20:05:08 by shhuang           #+#    #+#             */
/*   Updated: 2023/08/14 20:05:08 by shhuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void printinfo(const std::string& str)
{
	int i = 0;
	while(str[i])
	{
		std::cout << str[i];
		i++;
		if(i == 9 && str.length() > 10)
		{
			std::cout << '.';
			break;
		}
	}
}
void insert_spaces(std::string str)
{
	int i = 0;
	int x = 0;
	while(str[i])
		i++;
	while(x < 10-i)
	{
		std::cout << " ";
		x++;
	}
}

void printobj(PhoneBook& data, int x)
{
	std::cout << "NAME: " << data.contatti[x].name << '\n';
	std::cout << "LAST NAME: " << data.contatti[x].last_name << '\n';
	std::cout << "NICKNAME: " << data.contatti[x].nickname << '\n';
	std::cout << "DARKEST SECRET: " << data.contatti[x].darkest_secret << '\n';
	std::cout << "PHONE: " << data.contatti[x].phone_number << '\n';
}

int main()
{
	PhoneBook data;
    std::string input;
	int i = 0;
	data.num = 0;
	while(1)
	{
		std::cout << "Enter a command: ADD | SEARCH | EXIT\n";
    	std::getline(std::cin, input);
    	std::cout << input << std::endl;
		if(input == "ADD")
		{
			std::cout << "\033[2J\033[1;1H";
			i=data.num-1;
			while(i >= 0)
			{
				if(i == 7)
				{
					i--;
					continue;
				}
				data.contatti[i+1] = data.contatti[i];
				i--; 
			}
			input = "";
			while(input.empty())
			{
				std::cout << "Nome: \n";
				std::getline(std::cin, input);
				if(input.empty())
					std::cout << "il Nome non può essere vuoto. Inserisca di nuovo perfavore eh.\n";
				else
					data.contatti[0].name = input;
			}
			input = "";
			while(input.empty())
			{
				std::cout << "Cognome: \n";
				std::getline(std::cin, input);
				if(input.empty())
					std::cout << "il Cognome non può essere vuoto. Inserisca di nuovo perfavore eh.\n";
				else
					data.contatti[0].last_name = input;
			}
			input = "";
			while(input.empty())
			{
				std::cout << "Nickname: \n";
				std::getline(std::cin, input);
				if(input.empty())
					std::cout << "il Nickname non può essere vuoto. Inserisca di nuovo perfavore eh.\n";
				else
					data.contatti[0].nickname = input;
			}
			input = "";
			while(input.empty())
			{
				std::cout << "Darkest_secret: \n";
				std::getline(std::cin, input);
				if(input.empty())
					std::cout << "Darkest_secret non può essere vuoto. Inserisca di nuovo perfavore eh.\n";
				else
					data.contatti[0].darkest_secret = input;
			}
			input = "";
			while(input.empty())
			{
				std::cout << "Phone number: \n";
				std::getline(std::cin, input);
				if(input.empty())
					std::cout << "Il numero di telefono deve contenere solo numeri.\n";
				else
					data.contatti[0].phone_number = input;
			}
			input = "";
			data.num++;
		}
		else if(input == "SEARCH")
		{
			std::cout << "\033[2J\033[1;1H";
			i=0;
			if(data.num == 0)
			{
				std::cout << "Non ci sono abbastanza contatti.\n";
				continue;
			}
			while(i < data.num)
			{
				std::cout << "|   ID   " << i << '|';
				insert_spaces(data.contatti[i].name);
				printinfo(data.contatti[i].name);
				std::cout <<'|';
				insert_spaces(data.contatti[i].last_name);
				printinfo(data.contatti[i].last_name);
				std::cout <<'|';
				insert_spaces(data.contatti[i].nickname);
				printinfo(data.contatti[i].nickname);
				std::cout <<'|';
				insert_spaces(data.contatti[i].phone_number);
				printinfo(data.contatti[i].phone_number);
				std::cout <<'|' << '\n';
				i++;
			}
			while(1)
			{
			std::cout << "Seleziona ID per stampare info sulla persona richiesta.\n";
			std::cin >> input;
			if (input.length() == 1 && (input[0] - '0') <= data.num) 
			{
				printobj(data, input[0] - '0');
				std::cout << '\n';
				std::cin.ignore();
				break;
			}
			else
				std::cout << "Index non valido.\n";
			}
		}
		else if(input == "EXIT")
		{
			std::cout << "\033[2J\033[1;1H";
			std::cout << "Grazie per averci usato gratuitamente, pagah!\n";
			return(0);
		}
	}
    return 0;
}