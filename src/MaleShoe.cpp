#include <iostream>
#include <vector>
#include "MaleShoe.h"
using namespace std;

MaleShoe::MaleShoe(unsigned int sz, string bodyCOL, string solesCOL)
    : size(sz), bodyColor(bodyCOL), solesColor(solesCOL)
{
    ID = rand() % 100 + 300; // this function generate random numbers for each pair of shoes
    cout << "Your shoes's ID is :" << ID << endl;
    cout << "Congratulation! Your Male Shoes is created successfully!!!\n\n";
}

unsigned int MaleShoe::get_size()
{
    return size;
}

string MaleShoe::get_bodyColor()
{
    return bodyColor;
}

string MaleShoe::get_solesColor()
{
    return solesColor;
}

bool MaleShoe::find_ID(unsigned int id)//finds special a pair of shoes using by ID
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

void MaleShoe::set_bodyColor(string bodycolor)
{
    bodyColor = bodycolor;
}

void MaleShoe::set_solesColor(string solescolor)
{
    solesColor = solescolor;
}

void MaleShoe::set_size(unsigned int sz)
{
    size = sz;
}

MaleShoe MaleShoe::operator>(MaleShoe &mshoe) const
{
    if ((this->ID) > mshoe.ID)
    {
        return *this;
    }
}

void male_shoe(vector<MaleShoe> &male) // this function get members of object and make the object
{
    unsigned int size;
    string bodyColor;
    string solesColor;

    cout << "What is your foot size?\n";
    cin >> size;

    cout << "What color do you want for shoe body?\n";
    cin.ignore();// ignores garbage character
    getline(cin, bodyColor);// get the string

    cout << "What color do you want for shoe soles / heel?\n";
    getline(cin, solesColor);// get the string

    MaleShoe mshoe(size, bodyColor, solesColor); // call constructor
    male.push_back(mshoe);
}
