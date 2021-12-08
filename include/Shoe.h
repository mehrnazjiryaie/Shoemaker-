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
    unsigned int get_size();//getter
    std::string get_bodyColor();//getter
    std::string get_solesColor();//getter
    bool find_ID(unsigned int);
    void set_bodyColor(std::string);//setter
    void set_solesColor(std::string);//setter
    void set_size(unsigned int);//setter
    Shoe operator>(Shoe &) const;//operator overloading > operator
};

Shoe::Shoe(/* args */)
{
}

Shoe::~Shoe()
{
}


