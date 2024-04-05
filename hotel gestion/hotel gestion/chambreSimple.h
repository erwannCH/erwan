#ifndef CHAMBRESIMPLE_H
#define CHAMBRESIMPLE_H

#include "Chambre.h"

class ChambreSimple : public Chambre {
public:
    ChambreSimple(int num, double prix, bool reserve);
    ChambreSimple(int num);
    ~ChambreSimple();

    void afficher() const override; // Added override keyword for afficher()
};

#endif // CHAMBRESIMPLE_H
