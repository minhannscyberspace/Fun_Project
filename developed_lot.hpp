#ifndef DEVELOPED_LOT_HPP
#define DEVELOPED_LOT_HPP

#include "lot.hpp"
namespace developed_lot {
class DevelopedLot: public lot::Lot{
private: 
    double footprint_area_; //area of 1 floor
    int floors_; //num floors in building

protected: 
    double floor_area_ratio() const; // get the floor to area ratio
public: 
    DevelopedLot(double latitude, double longitude, double width, double length, double footprint_area, int floors);
    virtual ~DevelopedLot(); // virtual destructor like the base class Lot
    double value() const override; // we will override the value in this subclass since value = land value + $100 per square foot of the floor space
};
}
#endif