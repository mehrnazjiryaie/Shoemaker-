#ifndef MALESHOE_H
#define MALESHOE_H
#include <iostream>
#include <vector>
#include "Shoe.h"

class MaleShoe:public Shoe
{
private:

public:
    MaleShoe(unsigned int, std::string, std::string);
    unsigned int get_size();//getter
    std::string get_bodyColor();//getter
    std::string get_solesColor();//getter
    bool find_ID(unsigned int);
    void set_bodyColor(std::string);//setter
    void set_solesColor(std::string);//setter
    void set_size(unsigned int);//setter
    MaleShoe operator>(MaleShoe &) const;//operator overloading > operator
    
};

void male_shoe(std::vector<MaleShoe> &);

#endif