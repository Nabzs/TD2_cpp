#include <iostream>
float i { 0 };
int main()
{
    std::cout << "Entrez trois valeurs" << std::endl;
    float value1 { 0 };
    float value2 { 0 };
    float value3 { 0 };

    std::cin >> value1;
    std::cin >> value2;
    std::cin >> value3;


    float m = value1 + value2 + value3;
    float i = m/3;

    std::cout << "La somme est : " << m << std::endl;

    std::cout << "La moyenne est : " << i << std::endl;

    //std::cout << m << std::endl;

    return 0;
}