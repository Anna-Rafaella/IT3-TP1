
#include <iostream>
#include "date.h"
#include <vector>
#include "auteur.h"
#include "lecteur.h"
#include "livre.h"
#include "bibliotheque.h"




int main() {
    Bibliotheque bibliotheque;

    // Ajouter un auteur
    auteur::Auteur auteur1("danne","warren", "jean",date::Date(03,05,2002));
   

    // Ajouter un livre avec l'auteur précédemment ajouté
    livre::Livre livre1("belami","dgin","Warren", "jean",date::Date(03,06,1976),"science-fiction","masculin",date::Date(03,05,2002),778899,{"dgb","erg"});
    
    bibliotheque.ajouterLivre(livre1);

    // Ajouter un lecteur
    lecteur::Lecteur lecteur1("dgni","john","illi",{2,3});
    bibliotheque.ajouterLecteur(lecteur1);
  

    bibliotheque.afficherLecteurs();

    return 0;
}