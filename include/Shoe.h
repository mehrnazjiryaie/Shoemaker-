#ifndef SHOE_H
#define SHOE_H
#include <iostream>

class Shoe
{
private:
    unsigned int size = 0;       // size of shoe
    std::string bodyColor = "";  // color of shoe body
    std::string solesColor = ""; // color of shoe soles
    unsigned int ID = 0;         // an id for each shoe
public:
    Shoe(unsigned int, std::string, std::string);
    Shoe operator>(Shoe &) const;//operator overloading > operator
};

