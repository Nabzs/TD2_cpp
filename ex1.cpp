#include <iostream>

int i {1};

int main()
{
    i += 1; // i est maintenant égal à 2
    std::cout << i << std::endl;
    std::cout << i*3 << std::endl; //i*3
    std::cout << i/2 << std::endl; //i/2
    return 0;
}