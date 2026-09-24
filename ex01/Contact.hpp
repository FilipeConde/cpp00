
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
public:
    Contact();
    Contact( int index,
             std::string fisrtName,
             std::string surname,
             std::string alias);
    ~Contact();

    int getIndex() ;
    std::string getFirstName() ;
    std::string getSurname() ;
    std::string getAlias() ;

private:
    int _index;
    std::string _firstName;
    std::string _surname;
    std::string _alias;
};

#endif
