#include <iostream>
#include "date.h"
#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H
#include <vector>
#include "auteur.h"
#include "lecteur.h"
#include "livre.h"
#include <algorithm>
#include <vector>

   // Exemple de classe Bibliotheque dans bibliotheque.h
class Bibliotheque {
public:
    void ajouterLivre(const livre::Livre& livre) {
        livres.push_back(livre);
    }

    void ajouterLecteur(const lecteur::Lecteur& lecteur) {
        lecteurs.push_back(lecteur);
    }

   

    void afficherLecteurs() const {
        std::cout << "Liste des lecteurs dans la bibliothèque:\n";
        for (const auto& lecteur : lecteurs) {
            lecteur.get_informations_lecteur();
        }
    }

private:
    std::vector<livre::Livre> livres;
    std::vector<lecteur::Lecteur> lecteurs;
};


#endif