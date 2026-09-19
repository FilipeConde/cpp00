#include <iostream>

int main(int ac, char **av){
    // writes single string input;
    // writes sequence of strings from input;
    // writes message if no input;

    std::cout << ac << "\n";
    if(ac == 1){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
    }
    
    return (0);
}
