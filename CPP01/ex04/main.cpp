#include "Sed.hpp"
#include <string.h>

int main(int ac, char **av)
{
	if(ac == 4)
	{
		std::fstream file;
		std::string s;
		std::string w_string;
		std::string fileInput = av[1];
		std::string replace = av[2];
		std::string with = av[3];
		size_t pos = 0;
		file.open(av[1], std::ios::in);
		if(!file)
		{
			std::cerr << "Errore: File non trovato." << std::endl;
			return(1);
		}
		else
		{
			s.assign((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
			file.close();
		}
		while((pos = s.find(replace, pos)) != std::string::npos)
		{
			w_string = s.substr(0, pos) + with + s.substr(pos + replace.size());
			s = w_string;
			pos += with.size();
		}
		fileInput = fileInput + ".replace";
		std::ofstream newFile(fileInput.c_str());
		if(newFile.is_open())
		{
			newFile << s;
			newFile.close();
			std::cout << "Sosituzione completata. Nuovo file = " << fileInput << std::endl;
			newFile.close();
		}
		else
		{
			std::cerr << "File non creato, errore." << std::endl;
			return 1;
		}
	}
	else
		std::cout << "Accetta esattamente 3 argomenti, File, Stringa da rimpiazzare, rimpiazzo.\n";
    return 0;
}