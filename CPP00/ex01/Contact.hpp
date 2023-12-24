#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		enum Data{ FirstName, LastName, NickName, PhoneNumber, DarkestSecret };
		void addName(Data data);
		void getInfo();
		void formatPrint();
		void printObj();
};

#endif
