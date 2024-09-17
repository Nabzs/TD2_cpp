#include <iostream>

int main()
{
    std::cout << "Entrez un nombre de jours : ";
    int jours;
    std::cin >> jours;

    int siecle {jours / 36000};
    int annee {jours/360};
    int mois {jours/30};
    int semaine {jours/7};

    // Affichage du résultat
    std::cout << jours << " jours correspond a : "
              << siecle << " siecle "
              << annee << " annee "
              << mois << " mois "
              << semaine << " semaine "
              << jours << " jours" << std::endl;
    return 0;
}


    


