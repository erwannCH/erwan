#include "Chambre.h"

Chambre::Chambre(int num, double prix, bool reserve, int litSimple, int litDouble, int taille) :
    m_numero(num), m_prix(prix), m_reserve(reserve), m_litSimple(litSimple), m_litDouble(litDouble), m_nPersone(litSimple + litDouble * 2), m_taille(taille)
{
}

Chambre::Chambre(int num, int litSimple, int litDouble, int taille) :
    m_numero(num), m_prix(0), m_reserve(false), m_litSimple(litSimple), m_litDouble(litDouble), m_nPersone(litSimple + litDouble * 2), m_taille(taille)
{
}

Chambre::~Chambre()
{
}

int Chambre::getNumero() const
{
    return m_numero;
}

double Chambre::getPrix() const
{
    return m_prix;
}

bool Chambre::getReserve() const
{
    return m_reserve;
}

int Chambre::getNPersone() const
{
    return m_nPersone;
}

int Chambre::getTaille() const
{
    return m_taille;
}

void Chambre::setReserve(bool reserve)
{
    m_reserve = reserve;
}

void Chambre::setPrix(double prix)
{
    m_prix = prix;
}
