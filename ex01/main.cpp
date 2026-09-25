// #ifndef PHONEBOOK_HPP
// # define PHONEBOOK_HPP
#include <iostream>
#include "PhoneBook.hpp"

int main(int ac, char **av){
    (void)av;
    if(ac > 1){
        std::cout << "This program doesn't allows you to start with inputs!" << std::endl;
        return (1);
    }

    PhoneBook phoneBook;
    std::cout << "PhoneBook Count: " << phoneBook.getCount() << std::endl;    
    return (0);
}

// #endif