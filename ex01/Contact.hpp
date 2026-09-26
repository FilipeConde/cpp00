
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
            const std::string &alias,
            const std::string &phoneNbr,
            const std::string &darkestSecret);

    Contact(const Contact &other);
    Contact &operator=(const Contact &other);
    
    ~Contact();

    int getIndex() ;
    std::string getFirstName() const;
    std::string getSurname() const;
    std::string getAlias() const;
    std::string getPhoneNbr() const;
    std::string getDarkestSecret() const;

private:
    int _index;
    std::string _firstName;
    std::string _surname;
    std::string _alias;
    std::string _phoneNbr;
    std::string _darkestSecret;
};

#endif
