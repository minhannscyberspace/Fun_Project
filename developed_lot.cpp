#include "developed_lot.hpp"

namespace developed_lot{

DevelopedLot::DevelopedLot(double latitude, double longitude, double width, double length, double footprint_area, int floors)
    : lot::Lot(latitude, longitude, width, length), footprint_area_(footprint_area), floors_(floors) {}

DevelopedLot::~DevelopedLot() = default;
double DevelopedLot::floor_area_ratio() const {
    double land = land_area();
    if (land == 0) return 0;
    return (footprint_area_*floors_)/land; // the ratio = total floor area / land area
}
double DevelopedLot::value() const {
    double base_land_val = lot::Lot::value();
    double total_floor_area = footprint_area_ * floors_;
    double building_val = total_floor_area * 100.0;
    return base_land_val + building_val;
}
}