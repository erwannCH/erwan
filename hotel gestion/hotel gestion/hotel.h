#ifndef HOTEL_H
#define HOTEL_H

#include <vector>
#include "etage.h"

class hotel {
public:
    hotel();
    ~hotel();

    int getTaille() const;
    std::vector<etage*> getEtage();

    void ajouterEtage(etage* etage);
    void afficherEtage() const;

private:
    int e_taille;
    std::vector<etage*> m_etage;
};

#endif // HOTEL_H
