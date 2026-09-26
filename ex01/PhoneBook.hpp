#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();

    void            addContact();
    int             getCount();
    int             getNext();
    void            printContactLst();
    const   Contact &getContact(int index) const;
    void            searchContact();

private:
    Contact _contactLst[8];
    int _count;
    int _next;

    void    setContact(const std::string &firstName,
                        const std::string &surname,
                        const std::string &alias);
};

#endif
