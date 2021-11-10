#include "SportShoe.h"
#include <iostream>
using namespace std;

SportShoe::SportShoe(unsigned int sz, string shoeLCOL, string bodyCOL, string solesCOL)
    : size(sz), shoelaseColor(shoeLCOL), bodyColor(bodyCOL), solesColor(solesCOL)
{
    ID = rand() % 100 + 100;
    cout << "ID is :" << ID << endl;
    cout << "Your shoes is created successfully!!!\n";
}

string SportShoe::get_shoelase()
{
    return shoelaseColor;
}

string SportShoe::get_bodyColor()
{
    return bodyColor;
}

string SportShoe::get_solesColor()
{
    return solesColor;
}