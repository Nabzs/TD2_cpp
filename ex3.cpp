#include <iostream>

int i {11};
int n {2};

int main()
{
    std::cout << i << std::endl;
    float f { static_cast<float>(n) };
    std::cout << i/n << std::endl; //on obtient 5 car on demande la valeur entière de 11/5 donc 5
    std::cout << i/f << std::endl; 
    return 0;
}