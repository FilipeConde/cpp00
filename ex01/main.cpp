#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"
#include "utils.hpp"

// enum options{
//     ADD,
//     SEARCH,
//     EXIT
// };

int main(int ac, char **av){
    (void)av;
    if(ac > 1){
        std::cout << "This program doesn't allows you to start with inputs!" << std::endl;
        return (1);
    }

    PhoneBook   phoneBook;
    std::string opt;

    while(1){
        instructionMsg();
        std::cin >> opt;
        opt = strToUpper(opt);
        // std::cout << opt << std::endl;
        switch (parseOption(opt))
        {
        case EXIT:
            std::cout << "Good bye!" << std::endl;
            exit(EXIT_SUCCESS);
            break;
        default:
            break;
        }
    }

    phoneBook.addContact("1", "Silva", "aninha");
    phoneBook.addContact("2", "Albuquerque", "Betão");
    phoneBook.addContact("3", "Santos", "Kaká");
    phoneBook.addContact("4", "Santos", "Kaká");
    phoneBook.addContact("5", "Santos", "Kaká");
    phoneBook.addContact("6", "Santos", "Kaká");
    phoneBook.addContact("7", "Santos", "Kaká");
    phoneBook.addContact("8", "Santos", "Kaká");
    phoneBook.addContact("9", "Mangual", "Pepeu");
    phoneBook.addContact("10", "Consuelo", "Mari");

    phoneBook.printContactLst();
    
    return (0);
}
