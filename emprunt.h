#include <iostream>
#include "date.h"
#ifndef EMPRUNT_H
#define EMPRUNT_H
#include <vector>

namespace emprunt{
class Emprunt {
        public:
        Emprunt(date::Date date_emprunt, int ISBN_livre, std::string id_lecteur );
        std::string get_informations_emprunt(Emprunt& emprunt) const;
        date::Date get_date_emprunt() const;
         int get_ISBN_livre() const;
        std::string get_id_lecteur() const;
        std::string To_string(Emprunt& emprunt);
      


        private:
        date::Date _date_emprunt;
        int _ISBN_livre;
        std::string _id_lecteur;
        
   

    
    };
}//lecteur

#endif // LECTEUR_H
   