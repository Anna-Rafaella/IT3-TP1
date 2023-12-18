#include <iostream>
#include "date.h"
#ifndef AUTEUR_H
#define AUTEUR_H

namespace auteur{
    class Auteur{
      public:
        Auteur(std::string identifiant, std::string nom_auteur,std::string prenom , date::Date birthday);
        std::string get_informations_auteur( Auteur& auteur) const;
        std::string get_identifiant() const;
        std::string get_nom_auteur() const;
         std::string get_prenom() const;
         date::Date get_birthday()const;

    private:
        std::string _identifiant;
        std::string _nom_auteur;
        std::string _prenom;
        date::Date _birthday;


    };
}

#endif