#ifndef LOT_HPP
#define LOT_HPP

namespace lot{

class Lot {
private: 
    double latitude_;
    double longitude_;
    double width_;
    double length_;
protected: 
    double land_area() const; // I kept this protected to be reused by other subclasses
public: 
    Lot(double latitude, double longitude, double width, double length); //constructor
    virtual ~Lot(); // virtual destructor
    double latitude() const {return latitude_; } // latitue getter
    double longitude() const {return longitude_; } // longitude getter
    virtual double value() const; //used for computing land value
};
}
#endif