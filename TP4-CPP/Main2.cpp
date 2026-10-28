
#include <iostream>
#include "Universite.hpp"
#include "Etudiant.hpp"
using namespace std;

int main() {
    // Creation de l'universite
    Universite u("Universite de Casablanca");

    // Creation des etudiants
    Etudiant e1("Amine", 20, &u);
    Etudiant e2("Sara", 21, &u);

    // Affichage des informations
    e1.afficher();
    e2.afficher();

    // Affichage du nombre total d'etudiants
    Etudiant::afficherTotal();

    return 0;
}
