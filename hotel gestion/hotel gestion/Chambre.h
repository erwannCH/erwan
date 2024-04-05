#ifndef CHAMBRE_H
#define CHAMBRE_H

#include <string>

class Chambre {
public:
    Chambre(int num, double prix, bool reserve, int litSimple, int litDouble, int taille);
    Chambre(int num, int litSimple, int litDouble, int taille);
    virtual ~Chambre();

    virtual void afficher() const = 0; // Added pure virtual function for afficher()

    int getNumero() const;
    double getPrix() const;
    bool getReserve() const;
    int getNPersone() const;
    int getTaille() const;

    void setReserve(bool reserve);
    void setPrix(double prix);

protected:
    int m_numero;
    double m_prix;
    bool m_reserve;
    int m_litSimple;
    int m_litDouble;
    int m_nPersone;
    int m_taille;
};

#endif // CHAMBRE_H
