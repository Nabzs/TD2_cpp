#include <iostream>

int main() {
    // Déclaration de number pour le nombre de la lettre correspondante
    int number;
    
    // Saisir un nombre entre 1 et 26
    std::cout << "Entrez un nombre entre 1 et 26 : ";
    std::cin >> number;

    // Vérifier si le nombre est valide
    if (number < 1 || number > 26) {
        std::cout << "Veuillez entrer un nombre ntre 1 et 26 !!" << std::endl;
    } else {
        // Calculer la lettre correspondante
        char letter = 'A' + (number - 1); // 'A' a une valeur ASCII de 65
        std::cout << "La lettre correspondante est : " << letter << std::endl;
    }

    return 0;
}
