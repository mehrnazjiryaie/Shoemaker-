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
    MaleShoe operator>(MaleShoe &) const;//operator overloading > operator
    
};

void male_shoe(std::vector<MaleShoe> &);

#endif