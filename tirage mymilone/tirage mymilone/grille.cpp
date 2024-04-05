#include "grille.h"
#include <map>

Grille::Grille(std::vector<int> nums, std::vector<int> etoiles) : nums_(nums), etoiles_(etoiles) {}

std::vector<int> Grille::get_nums() const {
    return nums_;
}

std::vector<int> Grille::get_etoiles() const{
    return etoiles_;
}

int Grille::calculer_gain(const Tirage& tirage) const {
    int nums_corrects = 0;
    int etoiles_correctes = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (nums_[i] == tirage.get_nums()[j]) {
                nums_corrects++;
                break;
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (etoiles_[i] == tirage.get_etoiles()[j]) {
                etoiles_correctes++;
                break;
            }
        }
    }

    std::map<int, std::map<int, int>> tableau_des_gains = {
        {2, {{0, 4}, {1, 5}, {2, 6}}},
        {3, {{0, 9}, {1, 11}, {2, 14}}},
        {4, {{0, 39}, {1, 57}, {2, 120}}},
        {5, {{0, 20851}, {1, 200738}, {2, 73000000}}}
    };

    if (tableau_des_gains.find(nums_corrects) != tableau_des_gains.end() && tableau_des_gains[nums_corrects].find(etoiles_correctes) != tableau_des_gains[nums_corrects].end()) {
        return tableau_des_gains[nums_corrects][etoiles_correctes];
    }
    else {
        return 0;
    }
}
