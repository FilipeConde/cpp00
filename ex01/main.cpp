#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"
#include "utils.hpp"

int main(int ac, char **av)
{
    (void)av;
    if (ac > 1)
    {
        std::cout << "This program doesn't allows you to start with inputs!" << std::endl;
        return (1);
    }

    PhoneBook phoneBook;
    std::string opt;

    while (1)
    {
        instructionMsg();
        std::cin >> opt;
        opt = strToUpper(opt);
        switch (parseOption(opt))
        {
            case ADD:
                
                std::cout << std::endl;
                break;
            case EXIT:
                std::cout << "Good bye!" << std::endl;
                exit(EXIT_SUCCESS);
                break;
            default:
                std::cout << "\n\n" << std::endl;
                std::cout << std::endl;
                std::cout << "Invalid option." << std::endl;
                std::cout << std::endl;
                break;
        }
    }

    phoneBook.printContactLst();

    return (0);
}
