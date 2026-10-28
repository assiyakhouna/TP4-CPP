#ifndef LIVRE_HPP
#define LIVRE_HPP

#include <string>
using namespace std;

class Livre {
private:
    string titre;
    string auteur;
    int annee;

    static int nbLivres;

public:
    Livre(string t, string a, int an);

    void afficher() const;

    static void afficherTotal();
};

#endif