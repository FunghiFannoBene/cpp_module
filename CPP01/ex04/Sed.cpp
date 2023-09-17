#include "Sed.hpp"

Sed::Sed(std::string filename)
{
	this->_filename = filename;
	this->_fileout = filename + ".replace";
}

Sed::~Sed()
{
}

void Sed::replace(std::string s1, std::string s2)
{
	std::ifstream in_file(this->_filename.c_str());
	if(in_file.is_open())
	{
		std::string line;
		if(std::getline(in_file, line, '\0'))
		{
			std::ofstream out_file(this->_fileout.c_str());
			size_t position = line.find(s1);
			while(position != std::string::npos)
			{
				line.erase(position, s1.length());
				line.insert(position, s2);
				position = line.find(s1);
			}
			out_file << line;
			out_file.close();
		}
		else
		{ 
            std::cerr << "Empty file found." << std::endl;
			in_file.close();
			return;
		}
	}
	else
	{
		std::cerr << "Not valid or not found.\n";
		exit(EXIT_FAILURE);
	}
	in_file.close();
}
