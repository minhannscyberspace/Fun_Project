#include "lot.hpp"
namespace lot {
// initializing latitude, longitude, width and length
Lot::Lot(double latitude, double longitude, double width, double length): latitude_(latitude), longitude_(longitude), width_(width), length_(length) {}
Lot::~Lot() = default;
double Lot::land_area() const{
    return width_ * length_; //get area of the land 
}
double Lot::value() const {
    return land_area() * 16.0; //value of the land = area * $16
}
}