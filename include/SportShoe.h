#ifndef SPORTSHOE_H
#define SPORTSHOE_H
#include <iostream>

class SportShoe
{
private:
    unsigned int size = 0;          // size of shoe
    std::string shoelaseColor = ""; // color of shoelace
    std::string bodyColor = "";     // color of shoe body
    std::string solesColor = "";    // color of shoe soles - zire`ye kafsh
    unsigned int ID = 0;            // an id for each shoe

public:
    SportShoe(unsigned int, std::string, std::string, std::string);
    std::string get_shoelase();
    std::string get_bodyColor();
    std::string get_solesColor();
    //~SportShoe();
};

#endif