#include <iostream>
#include "SportShoe.h"
#include "FemaleShoe.h"
#include "MaleShoe.h"
#include "Function.h"
#include "Shoe.h"
using namespace std;

vector<SportShoe> sport;   // global vector
vector<FemaleShoe> female; // global vector
vector<MaleShoe> male;     // global vector

int main(int argc, char const *argv[])
{

    cout << "-------WELCOME TO SHOE SHOP-------- \n";

    while (1)
    {
        cout << "               MENU                 \n";
        cout << "1 . Creat shoes                     \n";
        cout << "2 . Edit                            \n";
        cout << "3 . Show                            \n";
        cout << "4 . History                         \n\n";

        unsigned int id;
        string BC;      // body color
        string SHL;     // shoe lase color
        string SL;      // soles color
        unsigned int S; // size
        double HL;      // heel length
        string HC;      // heel color

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            shoes(sport, female, male); // Creat shoes
            break;

        case 2:
            cout << "Please enter shoe ID that you want to edit :";
            cin >> id;
            edit(id, sport, female, male, BC, SHL, SL, S, HL, HC);
            break;

        case 3:
            cout << "Please enter shoe ID that you want to edit :";
            cin >> id;
            show(id, sport, female, male, BC, SHL, SL, S, HL, HC);
            break;

        case 4:
            history(sport, female, male);
            break;
        default:
            cout << "wrong choice! try again\n";
            break;
        }
    }

    return 0;
}
