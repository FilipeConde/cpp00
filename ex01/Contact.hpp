
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
public:
    Contact();

    Contact( int index,
            const std::string &firstName,
            const std::string &surname,
            const std::string &alias);

    Contact(const Contact &other);
    Contact &operator=(const Contact &other);
    
    ~Contact();

    int getIndex() ;
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
