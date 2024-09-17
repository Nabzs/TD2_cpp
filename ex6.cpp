#include <iostream>
#include <cmath>

int main()
{
    float const pi {3.141592};
    int a {static_cast<int>(pi*3)}; // je veux le résultat de pi (environ 3.141592) fois 3
    int b {8};

    b += 20;  // je veux ajouter le nombre 20 à la valeur de b

    b = b * 15; // je veux modifier la valeur de b en la multipliant par 15

    std::cout << "a: " << a << std::endl; // Affichage de a
    std::cout << "b: " << b << std::endl; // Affichage de b

    return 0;
}