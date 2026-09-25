#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"
#include "utils.hpp"

int main(int ac, char **av)
{
    (void)av;
    if (ac > 1)
    {
        std::cout << "This program doesn't allows you to start with inputs!" << std::endl;
        return (1);
    }

    PhoneBook phoneBook;
    std::string opt;
    std::string firstName;
    std::string surname;
    std::string alias;

    while (1)
    {
        instructionMsg();
        getline(std::cin, opt);
        opt = strToUpper(opt);
        switch (parseOption(opt))
        {
            case ADD:
                std::cout << "Enter the info with no special characters like \"ã\" or \"é\"..." << std::endl;
                std::cout << "First name: ";
                std::getline(std::cin, firstName);
                std::cout << "Surname: ";
                std::getline(std::cin, surname);
                std::cout << "Alias: ";
                std::getline(std::cin, alias);
                phoneBook.addContact(firstName, surname, alias);
                std::cout << std::endl;
                break;
            case SEARCH:
                phoneBook.searchContact();
                break;
            case EXIT:
                std::cout << "Good bye!" << std::endl;
                exit(EXIT_SUCCESS);
                break;
            default:
                std::cout << "\n\n" << std::endl;
                std::cout << std::endl;
                std::cout << "Invalid option." << std::endl;
                std::cout << std::endl;
                break;
        }
        // phoneBook.printContactLst();
    }
    return (EXIT_SUCCESS);
}
