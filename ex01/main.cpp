#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>

int main(int ac, char **av){
    (void)av;
    if(ac > 1){
        std::cout << "This program doesn't allows you to start with inputs!" << std::endl;
        return (1);
    }
    return (0);
}

#endif