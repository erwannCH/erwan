#ifndef GRILLE_H
#define GRILLE_H

#include <vector>
#include "tirage.h"

class Grille {
public:
    Grille(std::vector<int> nums, std::vector<int> etoiles);

    std::vector<int> get_nums() const;
    std::vector<int> get_etoiles() const;

    int calculer_gain(const Tirage& tirage) const;

private:
    std::vector<int> nums_;
    std::vector<int> etoiles_;
};

#endif // GRILLE_H
