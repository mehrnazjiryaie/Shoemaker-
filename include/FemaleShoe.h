#ifndef FEMALESHOE_H
#define FEMALESHOE_H
#include <iostream>
#include <vector>

class FemaleShoe
{
private:
    unsigned int size = 0;      // size of shoe
    std::string bodyColor = ""; // color of body shoe
    std::string heelColor = ""; // color of heel and soles - zireh ya pashneh kafsh
    double heelLength = 0;      // length of heel
    unsigned int ID = 0;        // an id for each shoe
public:
    FemaleShoe(unsigned int, std::string, std::string, double); // constructor
    unsigned int get_size();                                    // getter
    std::string get_bodyColor();                                // getter
    std::string get_heelColor();                                // getter
    double get_heelLength();                                    // getter
    bool find_ID(unsigned int);
    void set_bodyColor(std::string);          // setter
    void set_heelColor(std::string);          // setter
    void set_size(unsigned int);              // setter
    void set_heelLength(double);              // setter
    FemaleShoe operator>(FemaleShoe &) const; // operator overloading > operator
};

void female_shoe(std::vector<FemaleShoe> &);

#endif