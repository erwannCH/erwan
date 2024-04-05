#ifndef ETAGE_H
#define ETAGE_H

#include <vector>
#include "Chambre.h"

class etage {
public:
    etage(int numEtage);
    ~etage();

    int getTaille() const;
    int getTailleMax() const;
    int getNumEtage() const;
    std::vector<Chambre*> getChambres() const;

    void ajouterChambres(Chambre* chambre);
    void ajouterTaille(int taille);
    void afficherChambres() const;

private:
    int e_taille;
    int e_tailleMax;
    int numEtage;
    std::vector<Chambre*> m_chambres;
};

#endif // ETAGE_H
