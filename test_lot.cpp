#include <cassert>
#include "lot.hpp"


void lot_test() {
    lot::Lot lot1 = lot::Lot(0, 0, 0, 0);
    lot::Lot lot2 = lot::Lot(18.776, 108.5, 122.8, 19.1);
    lot::Lot lot3 = lot::Lot(-90.909090, 180.364, 6.8, 4.4);

    double val1 = lot1.value();
    double val2 = lot2.value();
    double val3 = lot3.value();

    assert(val1 == 0);
    assert(val2 == 37527.68);
    assert(val3 == 478.72);
}

int main() {
    lot_test();
}
