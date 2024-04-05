#include "ChambreDouble.h"
#include <iostream>

ChambreDouble::ChambreDouble(int num, double prix, bool reserve) :
    Chambre(num, prix, reserve, 0, 1, 3)
{
}

ChambreDouble::ChambreDouble(int num) :
    Chambre(num, 0, 1, 3)
{
}

ChambreDouble::~ChambreDouble()
{
}

void ChambreDouble::afficher() const
{
    std::cout << "Chambre Double : " << getNumero() << ", " << getPrix() << " euros" << std::endl;
}
