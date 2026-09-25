#include "PhoneBook.hpp"
#include <iomanip>
#include "utils.hpp"

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

void    PhoneBook::searchContact(){
    printContactLst();
}
