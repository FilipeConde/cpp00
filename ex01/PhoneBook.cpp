#include "PhoneBook.hpp"

PhoneBook::~PhoneBook() {};

PhoneBook::PhoneBook() : _count(0), _next(0) {}

int     PhoneBook::getCount() { return _count; }

int     PhoneBook::getNext() { return _next; }

void    PhoneBook::addContact(const std::string &firstName,
                            const std::string &surname,
                            const std::string &alias){
    _contactLst[_next] = Contact(_next, firstName, surname, alias);
    _next = (_next + 1) % 8;
    if (_count < 8)
        _count++;
}

const Contact   &PhoneBook::getContact(int index) const{
    return (_contactLst[index]);
}

void    PhoneBook::printContactLst(){
    int i = 0;
    int lstSize = getCount();

    while (i < lstSize){
        std::cout << _contactLst[i].getFirstName()
            << " "
            << _contactLst[i].getSurname() << std::endl;
        i++;
    }
}
