#include "Reservation.h"

Reservation::Reservation(int nPersone, int dure) : nPersone(nPersone), dure(dure) {}

Reservation::~Reservation() {}

int Reservation::getNPersone() const {
    return nPersone;
}

int Reservation::getDure() const {
    return dure;
}

void Reservation::unJourPasse() {
    dure -= 1;
}
