#include "Contact.hpp"

Contact::Contact(){
    _index = 0;
    _firstName = "";
    _surname = "";
    _alias = "";
}

Contact::Contact(int index,
                std::string firstName,
                std::string surname,
                std::string alias){
                    _index = index;
                    _firstName = firstName;
                    _surname = surname;
                    _alias = alias;
                }

Contact::~Contact() {}

int Contact::getIndex() { return _index; }
std::string Contact::getFirstName() { return _firstName; }
std::string Contact::getSurname() { return _surname; }
std::string Contact::getAlias() { return _alias; }
