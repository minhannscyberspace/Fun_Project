#include <cassert>
#include "developed_lot.hpp"

void developed_lot_test() {
    developed_lot::DevelopedLot dlot1 =
        developed_lot::DevelopedLot(18.776, 108.5, 122.8, 19.1, 0, 0);

    developed_lot::DevelopedLot dlot2 =
        developed_lot::DevelopedLot(-90.909090, 180.364, 6.8, 4.4, 60.1, 10);

    double val1 = dlot1.value();
    double val2 = dlot2.value();

    assert(val1 == 37527.68);
    assert(val2 == 60578.72);

}

int main() {
    developed_lot_test();
}