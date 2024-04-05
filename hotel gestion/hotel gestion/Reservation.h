#pragma once

class Reservation {
public:
    Reservation(int nPersone, int dure);
    ~Reservation();

    int getNPersone() const;
    int getDure() const;

    void unJourPasse();

private:
    int nPersone;
    int dure;
};
