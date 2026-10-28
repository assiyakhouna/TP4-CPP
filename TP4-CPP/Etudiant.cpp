
#include "Etudiant.hpp"
#include <iostream>
using namespace std;

// Initialisation de l'attribut statique
int Etudiant::nbEtudiants = 0;

// Constructeur
Etudiant::Etudiant(string n, int a, Universite* u)
    : nom(n), age(a), universite(u) {
    nbEtudiants++;
}

// Afficher les informations de l'etudiant
void Etudiant::afficher() const {
    cout << "Nom : " << nom << endl;
    cout << "Age : " << age << endl;

    if (universite != nullptr) {
        universite->afficherNom();
    }
    cout << "-------------------" << endl;
}

// Afficher le nombre total d'etudiants
void Etudiant::afficherTotal() {
    cout << "Nombre total d'etudiants : "
         << nbEtudiants << endl;
}
