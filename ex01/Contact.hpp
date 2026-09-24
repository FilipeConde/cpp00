
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
public:
    Contact(const int index,
            const std::string fisrtName,
            const std::string surname,
            const std::string alias);
    ~Contact();
    // std::string printContact(int index,
    //                          std::string firstName,
    //                          std::string surname,
    //                          std::string alias) const;
    int getIndex() const;
    std::string getFirstName() const;
    std::string getSurname() const;
    std::string getAlias() const;

private:
    int _index;
    std::string _firstName;
    std::string _surname;
    std::string _alias;
};

#endif
