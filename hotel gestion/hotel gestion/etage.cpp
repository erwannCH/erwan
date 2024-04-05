#include "etage.h"
#include <iostream>

etage::etage(int numEtage) :
    e_taille(0), e_tailleMax(8), numEtage(numEtage)
{
}

etage::~etage()
{
    for (Chambre* chambre : m_chambres) {
        delete chambre;
    }
}

int etage::getTaille() const
{
    return e_taille;
}

int etage::getTailleMax() const
{
    return e_tailleMax;
}

int etage::getNumEtage() const
{
    return numEtage;
}

std::vector<Chambre*> etage::getChambres() const
{
    return m_chambres;
}

void etage::ajouterChambres(Chambre* chambre)
{
    m_chambres.push_back(chambre);
}

void etage::ajouterTaille(int taille)
{
    e_taille += taille;
}

void etage::afficherChambres() const
{
    std::cout << "Etage n°: " << getNumEtage() << std::endl;
    for (const Chambre* chambre : m_chambres) {
        chambre->afficher();
    }
}
