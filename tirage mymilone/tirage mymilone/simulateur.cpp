#include "simulateur.h"
#include <iostream>

void Simulateur::simuler() {
    Tirage tirage;
    Grille grille({ 1, 2, 3, 4, 5 }, { 1, 2 });
    int gainTotal = 0;
    double perte_totale = 0;
    int nombre_de_tirage = 0;

    std::cout << "Numbers played: ";
    for (int i = 0; i < 5; i++) {
        std::cout << grille.get_nums()[i] << " ";
    }
    std::cout << std::endl;

    do{
        nombre_de_tirage++;
        tirage.generer_tirage();
        int gain = grille.calculer_gain(tirage);
        std::cout << "tirage numero " << nombre_de_tirage<< " ";
        std::cout << "Stars played: ";
        for (int i = 0; i < 2; i++) {
            std::cout << grille.get_etoiles()[i] << " ";

        std::cout << "Numbers drawn: ";
        for (int i = 0; i < 5; i++) {
            std::cout << tirage.get_nums()[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Stars drawn: ";
        for (int i = 0; i < 2; i++) {
            std::cout << tirage.get_etoiles()[i] << " ";
        }
        std::cout << std::endl;

        }
        std::cout << std::endl;

        std::cout << "Winnings: " << gain << " euros" << std::endl;
        gainTotal += gain;
        perte_totale += 2.5;
    } while (gainTotal - perte_totale < 0 || nombre_de_tirage < 7000 );
    
    std::cout << "tataly Winnings: " << gainTotal << " euros" << std::endl;
    std::cout << "tataly losing: " << perte_totale << " euros" << std::endl;
    std::cout << "diff: " << gainTotal - perte_totale << " euros" << std::endl;
}
