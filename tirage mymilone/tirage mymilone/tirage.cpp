#include "tirage.h"
#include <random>

Tirage::Tirage() {
}

std::vector<int> Tirage::get_nums() const {
    return nums_;
}

std::vector<int> Tirage::get_etoiles() const {
    return etoiles_;
}

void Tirage::generer_tirage() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 50);

    nums_ = { dis(gen), dis(gen), dis(gen), dis(gen), dis(gen) };

    dis = std::uniform_int_distribution<>(1, 12);
    etoiles_ = { dis(gen), dis(gen) };
}
