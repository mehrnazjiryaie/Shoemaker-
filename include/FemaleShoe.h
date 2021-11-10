#ifndef FEMALESHOE_H
#define FEMALESHOE_H
#include <iostream>

class FemaleShoe
{
private:
    unsigned int size = 0;      // size of shoe
    std::string bodyColor = ""; // color of body shoe
    std::string heelColor = ""; // color of heel and soles - zireh ya pashneh kafsh
    double heelLength = 0;      // length of heel
    unsigned int ID = 0;        // an id for each shoe
public:
    FemaleShoe(/* args */);
    ~FemaleShoe();
};

FemaleShoe::FemaleShoe(/* args */)
{
}

FemaleShoe::~FemaleShoe()
{
}
#endif