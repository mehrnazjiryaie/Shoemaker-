#include "SportShoe.h"
#include <iostream>
using namespace std;

SportShoe::SportShoe(unsigned int sz, string shoeLCOL, string bodyCOL, string solesCOL)
    : size(sz), shoelaseColor(shoeLCOL), bodyColor(bodyCOL), solesColor(solesCOL)
{
    ID = rand() % 100 + 100;
    cout << "Your shoes's ID is :" << ID << endl;
    cout << "Congratulation!Your shoes is created successfully!!!\n";
}

unsigned int SportShoe::get_size()
{
    return size;
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

void sport_shoe()
{
    unsigned int size;
    string shoelaseColor;
    string bodyColor;
    string solesColor;

    cout << "What is your foot size?\n";
    cin >> size;

    cout << "What color do you want for shoebody?\n";
    cin >> bodyColor;

    cout << "What color do you want for shoe soles / heel?\n";
    cin >> solesColor;

    cout << "What color do you want for shoelase?\n";
    cin >> shoelaseColor;

    SportShoe spshoe(size, shoelaseColor, bodyColor, solesColor);
}