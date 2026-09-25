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
    Contact a(0, "Ana", "Silva", "aninha");
    Contact b(a);
    Contact c;
    c = a;

    std::cout << b.getFirstName() << " " << c.getAlias() << std::endl;
    
    return (0);
}
