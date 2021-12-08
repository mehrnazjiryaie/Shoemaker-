#include <iostream>
#include <vector>
#include "Shoe.h"
using namespace std;

Shoe::Shoe(unsigned int sz, string bodyCOL, string solesCOL)
    : Shoe(sz, bodyCOL, solesCOL)
{
    ID = rand() % 100 + 300; // this function generate random numbers for each pair of shoes
    cout << "Your shoes's ID is :" << ID << endl;
    cout << "Congratulation! Your Male Shoes is created successfully!!!\n\n";
}

unsigned int Shoe::get_size()
{
    return size;
}

string Shoe::get_bodyColor()
{
    return bodyColor;
}

string Shoe::get_solesColor()
{
    return solesColor;
}

bool Shoe::find_ID(unsigned int id)//finds special a pair of shoes using by ID
{
    if (id == ID)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Shoe::set_bodyColor(string bodycolor)
{
    bodyColor = bodycolor;
}

void Shoe::set_solesColor(string solescolor)
{
    solesColor = solescolor;
}

void Shoe::set_size(unsigned int sz)
{
    size = sz;
}
