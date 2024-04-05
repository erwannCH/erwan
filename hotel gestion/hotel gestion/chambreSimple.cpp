#include "ChambreSimple.h"
#include <iostream>

ChambreSimple::ChambreSimple(int num, double prix, bool reserve) :
    Chambre(num, prix, reserve, 1, 0, 2)
{
}

ChambreSimple::ChambreSimple(int num) :
    Chambre(num, 1, 0, 2)
{
}

ChambreSimple::~ChambreSimple()
{
}

void ChambreSimple::afficher() const
{
    std::cout << "Chambre simple : " << getNumero() << ", " << getPrix() << " euros" << std::endl;
}
