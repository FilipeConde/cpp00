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
    std::string getFirstName(int index) const;
    std::string getSurname(int index) const;
    std::string getAlias(int index) const;

private:
    int _index;
    std::string _firstName;
    std::string _surname;
    std::string _alias;
};
