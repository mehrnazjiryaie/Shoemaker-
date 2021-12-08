#ifndef SPORTSHOE_H
#define SPORTSHOE_H
#include <iostream>
#include <vector>
#include "Shoe.h"

class SportShoe : public Shoe
{
private:
    std::string shoelaseColor = ""; // color of shoelace
public:
    SportShoe(unsigned int, std::string, std::string, std::string);
    std::string get_shoelaseColor(); // getter
    void set_shoelaseColor(std::string); // setter
    SportShoe operator>(SportShoe &) const;//operator overloading > operator
};

void sport_shoe(std::vector<SportShoe> &);

#endif