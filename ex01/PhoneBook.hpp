#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();

    void    addContact(const std::string &firstName,
                        const std::string &surname,
                        const std::string &alias);
    int     getCount();
    int     getNext();

private:
    Contact _contactLst[8];
    int _count;
    int _next;
};

#endif
