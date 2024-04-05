#include "hotel.h"
#include <iostream>

hotel::hotel() :
    e_taille(0)
{
}

hotel::~hotel()
{
    for (etage* etage : m_etage) {
        delete etage;
    }
}

int hotel::getTaille() const
{
    return e_taille;
}

std::vector<etage*> hotel::getEtage()
{
    return m_etage;
}

void hotel::ajouterEtage(etage* etage)
{
    m_etage.push_back(etage);
    e_taille += 1;
}

void hotel::afficherEtage() const
{
    for (const etage* etage : m_etage) {
        etage->afficherChambres();
    }
}
