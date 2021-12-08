#ifndef FEMALESHOE_H
#define FEMALESHOE_H
#include <iostream>
#include <vector>
#include "Shoe.h"

class FemaleShoe : public Shoe
{
private:
    // std::string heelColor = ""; // color of heel and soles - zireh ya pashneh kafsh
    double heelLength = 0; // length of heel
public:
    FemaleShoe(unsigned int, std::string, std::string, double); // constructor
    // std::string get_heelColor();                                // getter
    double get_heelLength(); // getter
    // void set_heelColor(std::string); // setter
    void set_heelLength(double);              // setter
    FemaleShoe operator>(FemaleShoe &) const; // operator overloading > operator
};

void female_shoe(std::vector<FemaleShoe> &);

#endif