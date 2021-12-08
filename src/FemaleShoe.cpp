#include <iostream>
#include <vector>
#include "FemaleShoe.h"
//#include "Shoe.h"
using namespace std;

FemaleShoe::FemaleShoe(unsigned int sz, string bodyCOL, string heelCOL, double heelLEN) // constructor Implementation
    : Shoe(sz, bodyCOL, heelCOL)
{
    // heelColor = heelCOL;
    heelLength = heelLEN;
    ID = rand() % 100 + 200; // this function generate random numbers for each pair of shoes
    cout << "Your shoes's ID is :" << ID << endl;
    cout << "Congratulation! Your Female Shoes is created successfully!!!\n\n";
}

unsigned int FemaleShoe::get_size() // getter
{
    return size;
}

string FemaleShoe::get_bodyColor() // getter
{
    return bodyColor;
}

string FemaleShoe::get_heelColor() // getter
{
    return heelColor;
}

double FemaleShoe::get_heelLength() // getter
{
    return heelLength;
}

bool FemaleShoe::find_ID(unsigned int id) // finds special a pair of shoes using by ID
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

void FemaleShoe::set_bodyColor(string bodycolor)
{
    bodyColor = bodycolor;
}
void FemaleShoe::set_heelColor(string heelcolor)
{
    heelColor = heelcolor;
}
void FemaleShoe::set_size(unsigned int sz)
{
    size = sz;
}
void FemaleShoe::set_heelLength(double heellength)
{
    heelLength = heellength;
}

FemaleShoe FemaleShoe::operator>(FemaleShoe &fshoe) const
{
    if ((this->ID) > fshoe.ID)
    {
        return *this;
    }
}

void female_shoe(vector<FemaleShoe> &female) // this function get members of object and make the object
{
    unsigned int size;
    string bodyColor;
    string heelColor;
    double heelLength;

    cout << "What is your foot size?\n";
    cin >> size;

    cout << "What color do you want for shoe body?\n";
    cin.ignore();            // ignores garbage character
    getline(cin, bodyColor); // get the string

    cout << "What color do you want for shoe soles / heel?\n";
    getline(cin, heelColor); // get the string

    cout << "What is your shoe's heel length?\n";
    cin >> heelLength;

    FemaleShoe feshoe(size, bodyColor, heelColor, heelLength); // call constructor
    female.push_back(feshoe);
}
