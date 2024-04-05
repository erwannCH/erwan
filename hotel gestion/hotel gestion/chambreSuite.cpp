#include "ChambreSuite.h"
#include <iostream>

ChambreSuite::ChambreSuite(int num, double prix, bool reserve) :
    Chambre(num, prix, reserve, 1, 2, 5)
{
}

ChambreSuite::ChambreSuite(int num) :
    Chambre(num, 1, 2, 5)
{
}

ChambreSuite::~ChambreSuite()
{
}

void ChambreSuite::afficher() const
{
    std::cout << "Chambre suite : " << getNumero() << ", " << getPrix() << " euros" << std::endl;
}
