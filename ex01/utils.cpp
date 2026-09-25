#include "utils.hpp"

Option parseOption(std::string &input)
{
    if (input == "ADD")
        return ADD;
    if (input == "SEARCH")
        return SEARCH;
    if (input == "EXIT")
        return EXIT;
    return INVALID;
}

void    instructionMsg(){
    std::cout << "##################################" << std::endl;
    std::cout << "######### My Phone Book ##########" << std::endl;
    std::cout << "## Enter an option:             ##" << std::endl;
    std::cout << "## ADD    => add contact        ##" << std::endl;
    std::cout << "## SEARCH => search for contact ##" << std::endl;
    std::cout << "## EXIT   => quit program       ##" << std::endl;
    std::cout << "##           (=^.^=)            ##" << std::endl;
    std::cout << "##################################" << std::endl;
}