#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class Contact
{
	public:
	std::string		name;
	std::string		last_name;
	std::string		nickname;
	std::string		darkest_secret;
	std::string		phone_number;

	void print_info()
	{
		std::cout << "Il numero di " << name << ' ' << last_name << " è " << phone_number << '\n';
	}
};

class PhoneBook
{
	public:
	Contact contatti[8];
	int num;
};

#endif