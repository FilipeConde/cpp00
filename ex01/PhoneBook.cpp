#include "PhoneBook.hpp"
#include "utils.hpp"
#include <iomanip>
#include <iostream>
#include <string>

PhoneBook::~PhoneBook() {};

PhoneBook::PhoneBook() : _count(0), _next(0) {}

int     PhoneBook::getCount() { return _count; }

int     PhoneBook::getNext() { return _next; }

void    PhoneBook::setContact(const std::string &firstName,
                            const std::string &surname,
                            const std::string &alias){
    _contactLst[_next] = Contact(_next, firstName, surname, alias);
    _next = (_next + 1) % 8;
    if (_count < 8)
        _count++;
}

void    PhoneBook::addContact(){
    std::string firstName = "";
    std::string surname = "";
    std::string alias = "";

    std::cout << "Write the info with no special characters\
 like \"ã\" or \"é\"...\nDo not leave any field empty!\n" << std::endl;
    while(firstName == ""){
        std::cout << "First name: ";
        std::getline(std::cin, firstName);
    }
    while(surname == ""){
        std::cout << "Surname: ";
        std::getline(std::cin, surname);
    }
    while(alias == ""){
        std::cout << "Alias: ";
        std::getline(std::cin, alias);
    }
    PhoneBook::setContact(firstName, surname, alias);
    std::cout << std::endl;
}

const Contact   &PhoneBook::getContact(int index) const{
    return (_contactLst[index]);
}

void PhoneBook::printContactLst()
{
    std::cout << "|" << std::setw(10) << "Index"
              << "|" << std::setw(10) << "First name"
              << "|" << std::setw(10) << "Surname"
              << "|" << std::setw(10) << "Alias"
              << "|" << std::endl;

    for (int i = 0; i < _count; i++)
    {
        std::cout << "|" << std::setw(10) << i
                  << "|" << std::setw(10) << _contactLst[i].getFirstName()
                  << "|" << std::setw(10) << _contactLst[i].getSurname()
                  << "|" << std::setw(10) << _contactLst[i].getAlias()
                  << "|" << std::endl;
    }
    std::cout << std::endl;
}

void PhoneBook::searchContact() 
{
    std::string input;
    int         index;

    if (_count == 0)
    {
        std::cout << "PhoneBook is empty." << std::endl;
        return;
    }

    printContactLst();
    while (true)
    {
        std::cout << "Select the contact index to access: ";
        if (!std::getline(std::cin, input))
            return;
        if (input.length() == 1 && input[0] >= '0' && input[0] < '0' + _count)
            break;
        std::cout << "Invalid index." << std::endl;
    }

    index = input[0] - '0';
    const Contact &contact = _contactLst[index];
    std::cout << "First name: " << contact.getFirstName() << std::endl;
    std::cout << "Surname:    " << contact.getSurname() << std::endl;
    std::cout << "Alias:      " << contact.getAlias() << std::endl;
    std::cout << std::endl;
}
