#include <iostream>

int main(int ac, char **av){
    
    int i = 1;
    int j = 0;

    if(ac == 1){
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
    }
    if(ac > 1){
        while(i < ac){
            while(av[i][j]){
                av[i][j] = std::toupper(av[i][j]);
                j++;
            }
            std::cout << av[i];
            j = 0;
            i++;
        }
        std::cout << "\n";
    }

    return (0);
}
