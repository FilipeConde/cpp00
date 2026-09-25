#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();

    Contact addContact();
    int getCount();
    int getNext();

private:
    Contact _contactLst[8];
    int _count;
    int _next;
};

#endif
