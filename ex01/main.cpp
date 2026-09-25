#include <iostream>
#include "PhoneBook.hpp"
#include "utils.hpp"

int main(int ac, char **av){
    (void)av;
    if(ac > 1){
        std::cout << "This program doesn't allows you to start with inputs!" << std::endl;
        return (1);
    }

    PhoneBook   phoneBook;
    std::string opt;
    // std::cout << "PhoneBook Count: " << phoneBook.getCount() << std::endl;

    while(1){
        // std::cout << "##################################" << std::endl;
        // std::cout << "######### My Phone Book ##########" << std::endl;
        // std::cout << "## Enter an option:             ##" << std::endl;
        // std::cout << "## ADD    => add contact        ##" << std::endl;
        // std::cout << "## SEARCH => search for contact ##" << std::endl;
        // std::cout << "## EXIT   => quit program       ##" << std::endl;
        // std::cout << "##           (=^.^=)            ##" << std::endl;
        // std::cout << "##################################" << std::endl;
        instructionMsg();
        std::cin >> opt;
        std::cout << opt << std::endl;
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
