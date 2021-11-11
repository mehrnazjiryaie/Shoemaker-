#include "SportShoe.h"
#include <iostream>
#include <vector>
using namespace std;

SportShoe::SportShoe(unsigned int sz, string shoeLCOL, string bodyCOL, string solesCOL)
    : size(sz), shoelaseColor(shoeLCOL), bodyColor(bodyCOL), solesColor(solesCOL)
{
    ID = rand() % 100 + 100;
    cout << "Your shoes's ID is :" << ID << endl;
    cout << "Congratulation! Your SportShoes is created successfully!!!\n\n";
}

unsigned int SportShoe::get_size()
{
    return size;
}

string SportShoe::get_shoelaseColor()
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

bool SportShoe::find_ID(unsigned int id)
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

void SportShoe::set_shoelaseColor(string sholasecolor)
{
    shoelaseColor = sholasecolor;
}

void SportShoe::set_bodyColor(string bodycolor)
{
    bodyColor = bodycolor;
}

void SportShoe::set_solesColor(string solescolor)
{
    solesColor = solescolor;
}

void SportShoe::set_size(unsigned int sz)
{
    size = sz;
}

void sport_shoe(vector<SportShoe> &sport) // this function get members of object and make the object
{
    unsigned int size;
    string shoelaseColor;
    string bodyColor;
    string solesColor;

    cout << "What is your foot size?\n";
    cin >> size;

    cout << "What color do you want for shoebody?\n";
    cin.ignore();
    getline(cin, bodyColor);

    cout << "What color do you want for shoe soles / heel?\n";
    getline(cin, solesColor);

    cout << "What color do you want for shoelase?\n";
    getline(cin, shoelaseColor);

    SportShoe spshoe(size, shoelaseColor, bodyColor, solesColor); // call constructor
    sport.push_back(spshoe);
}

// SportShoe::~SportShoe()
// {
// }
