
#include <iostream>
#include "date.h"
#ifndef LIVRE_H
#define LIVRE_H
#include <vector>
#include <string>

namespace livre{
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






    class Livre : public Auteur {
        public:
        Livre(std::string titre_oeuvre,std::string identifiant, std::string nom_auteur,std::string prenom,date::Date birthday,std::string langue, std::string genre, date::Date publication, int ISBN,std::vector<std::string>id_emprunteurs);
        std::string get_informations_livre( Livre& livre) const;
        std::string get_titre_oeuvre() const;
        std::string get_langue() const;
        std::string get_genre() const;
        date::Date get_publication()const;
        int get_ISBN() const;
        std::string To_string(Livre& livre);
        std::vector<std::string> get_id_emprunteurs() const;
        



        private:
        std::string _titre_oeuvre;
        std::string _auteur_ouvrage;
        std::string _langue;
        date::Date _publication;
        std::string _genre;
        int _ISBN;
        std::vector<std::string> _id_emprunteurs;

    
    };

}//livre

#endif // LIVRE_H
   