#include <iostream>

int main(int ac, char **av){
    // writes single string input;
    // writes sequence of strings from input;
    // writes message if no input;
    // should write in uppercase;
    int count = 1;

    if(ac == 1){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
    }
    if(ac > 1){
        while(count < ac){
            std::cout << av[count];
            count++;
        }
        std::cout << "\n";
    }

    return (0);
}
