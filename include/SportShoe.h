#ifndef SPORTSHOE_H
#define SPORTSHOE_H
#include <iostream>
#include <vector>

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
    std::string get_shoelaseColor();
    std::string get_bodyColor();
    std::string get_solesColor();
    unsigned int get_size();
    bool find_ID(unsigned int);
    void set_shoelaseColor(std::string);
    void set_bodyColor(std::string);
    void set_solesColor(std::string);
    void set_size(unsigned int);
    SportShoe operator>(SportShoe &)const;
    //~SportShoe();
};

void sport_shoe(std::vector<SportShoe> &);

#endif