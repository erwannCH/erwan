#ifndef TIRAGE_H
#define TIRAGE_H

#include <vector>

class Tirage {
public:
    Tirage();
    void generer_tirage();
    std::vector<int> get_nums() const;
    std::vector<int> get_etoiles() const;

private:
    std::vector<int> nums_;
    std::vector<int> etoiles_;
};

#endif // TIRAGE_H
