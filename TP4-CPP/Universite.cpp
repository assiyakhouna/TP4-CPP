
#include "Universite.hpp"
#include <iostream>
using namespace std;

// Constructeur
Universite::Universite(string n) : nom(n) {
}

// Afficher le nom de l'universite
void Universite::afficherNom() const {
    cout << "Universite : " << nom << endl;
}
