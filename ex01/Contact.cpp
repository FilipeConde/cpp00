#include "Contact.hpp"

Contact::Contact(const int index,
                const std::string firstName,
                const std::string surname,
                const std::string alias)
                : 
                _index(index),
                _firstName(firstName),
                _surname(surname),
                _alias(alias) {}

Contact::~Contact() {}

int Contact::getIndex() const { return _index; }
std::string Contact::getFirstName() const { return _firstName; }
std::string Contact::getSurname() const { return _surname; }
std::string Contact::getAlias() const { return _alias; }
