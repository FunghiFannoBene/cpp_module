#include "PhoneBook.hpp"

void Contact::getInfo()
{
	addName(Contact::FirstName);
	addName(Contact::LastName);
	addName(Contact::NickName);
	addName(Contact::PhoneNumber);
	addName(Contact::DarkestSecret);
}

void Contact::printObj()
{
	std::system("clear");
	std::cout << "\n\nUSER: " << this->nickName << std::endl;
	std::cout << "\n\n\n";
	std::cout << "NAME: " << this->firstName << '\n';
	std::cout << "LAST NAME: " << this->lastName << '\n';
	std::cout << "NICKNAME: " << this->nickName << '\n';
	std::cout << "PHONE: " << this->phoneNumber << '\n';
	std::cout << "DARKEST SECRET: " << this->darkestSecret << '\n';
	std::cout << "\n\n\n";
}

void Contact::addName(Contact::Data data) {
    std::string answer;
    while(1) {
        // Mostra un messaggio appropriato per ciascun tipo di input
        switch(data) {
            case FirstName:
                std::cout << "Enter First Name: ";
                break;
            case LastName:
                std::cout << "Enter Last Name: ";
                break;
            case NickName:
                std::cout << "Enter Nick Name: ";
                break;
            case PhoneNumber:
                std::cout << "Enter Phone Number: ";
                break;
            case DarkestSecret:
                std::cout << "Enter Darkest Secret: ";
                break;
        }

        std::getline(std::cin, answer);
		check_cin();
        if(answer.empty())
            std::cout << "Il campo non può essere vuoto\n";
        else
            break;
    }
	std::system("clear");

    switch(data) {
        case FirstName:
            firstName = answer;
			std::system("clear");
            break;
        case LastName:
            lastName = answer;
			std::system("clear");
			break;
        case PhoneNumber:
            phoneNumber = answer;
			std::system("clear");
            break;
        case NickName:
            nickName = answer;
			std::system("clear");
            break;
        case DarkestSecret:
            darkestSecret = answer;
			std::system("clear");
            break;
    }
}


void Contact::formatPrint()
{
	std::size_t len;
	std::cout << '|';
	int i = 0;
	std::string input;
	while(i < 3)
	{
		switch (i)
		{
			case 0:
				input = firstName;
				break;
			case 1:
				input = lastName;
				break;
			case 2:
				input = nickName;
				break;
		}
		if((len = input.length()) > 9)
		{
			input.erase(10);
			input[9] = '.';
		}
		else
			input.append(10 - len, ' ');
		std::cout << input;
		std::cout << '|';
		i++;
	}
}