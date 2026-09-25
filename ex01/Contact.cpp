#include "Contact.hpp"

Contact::Contact(){
    _index = -1;
    _firstName = "";
    _surname = "";
    _alias = "";
}

Contact::Contact(int index,
                const std::string &firstName,
                const std::string &surname,
                const std::string &alias){
                    _index = index;
                    _firstName = firstName;
                    _surname = surname;
                    _alias = alias;
                }

Contact::Contact(const Contact &other)
                : _index(other._index),
                _firstName(other._firstName),
                _surname(other._surname),
                _alias(other._alias) {}

Contact &Contact::operator=(const Contact &other){
    if (this != &other){
        _index = other._index;
        _firstName = other._firstName;
        _surname = other._surname;
        _alias = other._alias;
    }
    return (*this);
}

Contact::~Contact() {}

int Contact::getIndex() { return _index; }
std::string Contact::getFirstName() const { return _firstName; }
std::string Contact::getSurname() const { return _surname; }
std::string Contact::getAlias() const { return _alias; }
