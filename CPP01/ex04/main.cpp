#include "Sed.hpp"

int main(int argc, char**argv)
{
	if(argc == 4)
	{
	Sed file(argv[1]);
	file.replace(argv[2], argv[3]);
	}
	else
		std::cout << "3 parameters, filename, to replace, repace with";
    return 0;
}
