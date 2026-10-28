
#include "Livre.hpp"
#include <iostream>
using namespace std;

// Initialisation de l'attribut statique
int Livre::nbLivres = 0;

// Constructeur
Livre::Livre(string t, string a, int an)
    : titre(t), auteur(a), annee(an)
{
    nbLivres++;
}

// Afficher les informations du livre
void Livre::afficher() const
{
    cout << "Titre : " << titre << endl;
    cout << "Auteur : " << auteur << endl;
    cout << "Annee : " << annee << endl;
    cout << "-------------------" << endl;
}

// Afficher le nombre total de livres
void Livre::afficherTotal()
{
    cout << "Nombre total de livres : " << nbLivres << endl;
}
