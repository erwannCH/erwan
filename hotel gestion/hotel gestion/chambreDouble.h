#ifndef CHAMBREDOUBLE_H
#define CHAMBREDOUBLE_H

#include "Chambre.h"

class ChambreDouble : public Chambre {
public:
    ChambreDouble(int num, double prix, bool reserve);
    ChambreDouble(int num);
    ~ChambreDouble();

    void afficher() const override; // Added override keyword for afficher()
};

#endif // CHAMBREDOUBLE_H
