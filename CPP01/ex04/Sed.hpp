#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>

class Sed
{
private:
	std::string _filename;
	std::string _fileout;

public:
    Sed( std::string filename );
    ~Sed();
	void replace(std::string s1, std::string s2);
};

#endif
