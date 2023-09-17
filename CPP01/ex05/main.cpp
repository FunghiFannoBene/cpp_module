
#include "Harl.hpp"

int main( void ) {

    std::string input;
    Harl        harl;

    while (input.compare("exit"))
    {
        std::cout << "Ciao, sono harl inserisci un comando: DEBUG, ERROR, WARNING, INFO, exit.\n";
        std::cin >> input;
        harl.complain(input);
    }

    return 0;
}