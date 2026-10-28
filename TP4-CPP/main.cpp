#include <iostream>
#include "Livre.hpp"
using namespace std;

int main()
{
    // Creation des livres
    Livre l1("1984", "George Orwell", 1949);
    Livre l2("Le Petit Prince", "Antoine de Saint-Exupery", 1943);
    Livre l3("L'Etranger", "Albert Camus", 1942);

    // Affichage des informations
    l1.afficher();
    l2.afficher();
    l3.afficher();

    // Affichage du nombre total de livres
    Livre::afficherTotal();

    return 0;
}
