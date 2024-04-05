#include <iostream>
#include "hotel.h"
#include "ChambreSimple.h"
#include "ChambreDouble.h"
#include "ChambreSuite.h"

int main()
{
    hotel monHotel;

    // Ajouter des etages a l'hotel
    etage* etage1 = new etage(1);
    etage* etage2 = new etage(2);
    monHotel.ajouterEtage(etage1);
    monHotel.ajouterEtage(etage2);

    // Ajouter des chambres a l'etage 1
    ChambreSimple* chambreSimple1 = new ChambreSimple(101, 50, false);
    ChambreDouble* chambreDouble1 = new ChambreDouble(102, 70, false);
    ChambreSuite* chambreSuite1 = new ChambreSuite(103, 100, false);
    etage1->ajouterChambres(chambreSimple1);
    etage1->ajouterChambres(chambreDouble1);
    etage1->ajouterChambres(chambreSuite1);

    // Ajouter des chambres a l'etage 2
    ChambreSimple* chambreSimple2 = new ChambreSimple(201, 50, false);
    ChambreDouble* chambreDouble2 = new ChambreDouble(202, 70, false);
    ChambreSuite* chambreSuite2 = new ChambreSuite(203, 100, false);
    etage2->ajouterChambres(chambreSimple2);
    etage2->ajouterChambres(chambreDouble2);
    etage2->ajouterChambres(chambreSuite2);

    // Afficher les chambres de l'hotel
    monHotel.afficherEtage();

    // Liberer la memoire allouee
    delete chambreSimple1;
    delete chambreDouble1;
    delete chambreSuite1;
    delete chambreSimple2;
    delete chambreDouble2;
    delete chambreSuite2;
    delete etage1;
    delete etage2;

    return 0;
}
