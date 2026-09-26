#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <string>

enum Option
{
    ADD,
    SEARCH,
    EXIT,
    INVALID
};

void    instructionMsg();
Option  parseOption(std::string &input);
std::string strToUpper(std::string &opt);
std::string truncate(std::string str, size_t width, bool show_dot);

#endif