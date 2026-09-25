#include <iostream>
#include "PhoneBook.hpp"

int main(int ac, char **av){
    (void)av;
    if(ac > 1){
        std::cout << "This program doesn't allows you to start with inputs!" << std::endl;
        return (1);
    }

    PhoneBook   phoneBook;
    int         count = 0;
    // int         i = 0;

    std::cout << "PhoneBook Count: " << phoneBook.getCount() << std::endl;    
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
    count = phoneBook.getCount();

    phoneBook.printContactLst();
    
    return (0);
}
