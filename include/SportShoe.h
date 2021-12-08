#ifndef SPORTSHOE_H
#define SPORTSHOE_H
#include <iostream>
#include <vector>
#include "Shoe.h"

class SportShoe : public Shoe
{
private:
    //unsigned int size = 0;          // size of shoe
    std::string shoelaseColor = ""; // color of shoelace
    //std::string bodyColor = "";     // color of shoe body
    //std::string solesColor = "";    // color of shoe soles - zire`ye kafsh
    //unsigned int ID = 0;            // an id for each shoe

public:
    SportShoe(unsigned int, std::string, std::string, std::string);
    std::string get_shoelaseColor(); // getter
    //std::string get_bodyColor();     // getter
    //std::string get_solesColor();    // getter
    //unsigned int get_size();         // getter
    //bool find_ID(unsigned int);
    void set_shoelaseColor(std::string); // setter
    //void set_bodyColor(std::string);     // setter
    //void set_solesColor(std::string);    // setter
    //void set_size(unsigned int);         // setter
    SportShoe operator>(SportShoe &) const;//operator overloading > operator
};

void sport_shoe(std::vector<SportShoe> &);

#endif