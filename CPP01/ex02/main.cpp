#include <iostream>

int main()
{
	std::string hi = "HI THIS IS BRAIN";
    std::string *ciao = &hi;
	std::string &ref_hi = hi;

	std::cout << &hi << ", " << ciao << ", " << &ref_hi << std::endl;
	std::cout << hi << ", " << *ciao << ", " << ref_hi << std::endl;
	return 0;
}
