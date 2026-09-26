#include "Contact.hpp"

Contact::Contact(){
    _index = -1;
    _firstName = "";
    _surname = "";
    _alias = "";
    _phoneNbr = "";
    _darkestSecret = "";
}

Contact::Contact(int index,
                const std::string &firstName,
                const std::string &surname,
                const std::string &alias,
                const std::string &phoneNbr,
                const std::string &darkestSecret){
                    _index = index;
                    _firstName = firstName;
                    _surname = surname;
                    _alias = alias;
                    _phoneNbr = phoneNbr;
                    _darkestSecret = darkestSecret;
                }

Contact::Contact(const Contact &other)
                : _index(other._index),
                _firstName(other._firstName),
                _surname(other._surname),
                _alias(other._alias),
                _phoneNbr(other._phoneNbr),
                _darkestSecret(other._darkestSecret) {}

Contact &Contact::operator=(const Contact &other){
    if (this != &other){
        _index = other._index;
        _firstName = other._firstName;
        _surname = other._surname;
        _alias = other._alias;
        _phoneNbr = other._phoneNbr;
        _darkestSecret = other._darkestSecret;
    }
    return (*this);
}

Contact::~Contact() {}

int Contact::getIndex() { return _index; }
std::string Contact::getFirstName() const { return _firstName; }
std::string Contact::getSurname() const { return _surname; }
std::string Contact::getAlias() const { return _alias; }
std::string Contact::getPhoneNbr() const { return _phoneNbr; }
std::string Contact::getDarkestSecret() const { return _darkestSecret; }
