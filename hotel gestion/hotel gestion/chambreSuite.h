#ifndef CHAMBRESUITE_H
#define CHAMBRESUITE_H

#include "Chambre.h"

class ChambreSuite : public Chambre {
public:
    ChambreSuite(int num, double prix, bool reserve);
    ChambreSuite(int num);
    ~ChambreSuite();

    void afficher() const override; // Added override keyword for afficher()
};

#endif // CHAMBRESUITE_H
