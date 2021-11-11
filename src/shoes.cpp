#include "SportShoe.h"
#include "Function.h"
#include "FemaleShoe.h"
#include "MaleShoe.h"
#include <vector>
#include <iostream>
using namespace std;

void shoes(vector<SportShoe> &sport, vector<FemaleShoe> &female, vector<MaleShoe> &male)
{
    cout << "which kind of shoe do you want?\n";
    cout << " ------------------------\n";
    cout << "| 1 --> Sport Shoe       |\n";
    cout << "| 2 --> Female Shoe      |\n";
    cout << "| 3 --> Male Shoe        |\n";
    cout << " ------------------------\n\n";

    int num;

    cin >> num;

    switch (num)
    {
    case 1:
        sport_shoe(sport);

        break;

    case 2:
        female_shoe(female);
        break;

    case 3:
        male_shoe(male);
        break;

    default:
        cout << "There is not this type of shoe!!!\n";
        break;
    }
}

void history(vector<SportShoe> sport, vector<FemaleShoe> female, vector<MaleShoe> male)
{
    if (sport.size() == 0)
    {
        cout << "You didn`t creat sport shoes\n";
    }
    else if (sport.size() > 0)
    {
        cout << "Here is your sport shoes :\n";
        for (size_t i = 0; i < sport.size(); i++)
        {
            cout << "Body Color :" << sport[i].get_bodyColor() << endl;
            cout << "Shoe Lace :" << sport[i].get_shoelaseColor() << endl;
            cout << "ُSize :" << sport[i].get_size() << endl;
            cout << "Soles Color :" << sport[i].get_solesColor() << endl;
        }
    }

    if (female.size() == 0)
    {
        cout << "You didn`t creat female shoes\n";
    }
    else if (female.size() > 0)
    {
        cout << "Here is your female shoes :\n";
        for (size_t i = 0; i < female.size(); i++)
        {

            cout << "Body Color :" << female[i].get_bodyColor() << endl;
            cout << "Heel Color :" << female[i].get_heelColor() << endl;
            cout << "Heel Length :" << female[i].get_heelLength() << endl;
            cout << "Size :" << female[i].get_size() << endl;
        }
    }

    if (male.size() == 0)
    {
        cout << "You didn`t creat male shoes\n";
    }
    else if (male.size() > 0)
    {
        cout << "Here is your male shoes :\n";
        for (size_t i = 0; i < male.size(); i++)
        {

            cout << "Body Color :" << male[i].get_bodyColor() << endl;
            cout << "Size :" << male[i].get_size() << endl;
            cout << "Soles Color :" << male[i].get_solesColor() << endl;
        }
    }
}

void edit(unsigned int id, vector<SportShoe> &sport, vector<FemaleShoe> &female, vector<MaleShoe> &male,
          string BC, string SHL, string SL, unsigned int S, double HL, string HC)
{
    for (size_t i = 0; i < sport.size(); i++)
    {
        if (sport[i].find_ID(id))
        {
            cout << "Enter new body color : ";
            getline(cin, BC);
            sport[i].set_bodyColor(BC);
            cout << "Enter new sholase color : ";
            cin >> SHL;
            sport[i].set_shoelaseColor(SHL);
            cout << "Enter new soles color : ";
            cin >> SL;
            sport[i].set_solesColor(SL);
            cout << "Enter new size : ";
            cin >> S;
            sport[i].set_size(S);
        }
    }

    for (size_t i = 0; i < female.size(); i++)
    {
        if (female[i].find_ID(id))
        {

            cout << "Enter new body color : ";
            cin >> BC;
            female[i].set_bodyColor(BC);
            cout << "Enter new heel length : ";
            cin >> HL;
            female[i].set_heelLength(HL);
            cout << "Enter new heel color : ";
            cin >> HC;
            female[i].set_heelColor(HC);
            cout << "Enter new size : ";
            cin >> S;
            female[i].set_size(S);
        }
    }

    for (size_t i = 0; i < male.size(); i++)
    {
        if (male[i].find_ID(id))
        {
            cout << "Enter new body color : ";
            cin >> BC;
            male[i].set_bodyColor(BC);
            cout << "Enter new soles color : ";
            cin >> SL;
            male[i].set_solesColor(SL);
            cout << "Enter new size : ";
            cin >> S;
            male[i].set_size(S);
        }
    }
}
