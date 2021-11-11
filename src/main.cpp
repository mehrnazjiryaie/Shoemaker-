#include <iostream>
#include "SportShoe.h"
#include "FemaleShoe.h"
#include "MaleShoe.h"
#include "Function.h"
using namespace std;

vector<SportShoe> sport;   // global vector
vector<FemaleShoe> female; // global vector
vector<MaleShoe> male;     // global vector

int main(int argc, char const *argv[])
{
    srand(static_cast<unsigned int>(time(0)));

    cout << "-------WELCOME TO SHOE SHOP-------- \n";

    while (1)
    {
        cout << "               MENU                 \n";
        cout << "1 . Creat shoes                     \n";
        cout << "2 . Show a special shoes            \n";
        cout << "3 . Edit                            \n";
        cout << "4 . History                         \n\n";

        unsigned int id;
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            shoes(sport, female, male); // Creat shoes
            break;
        // case 2:

        //     break;
        case 3:
            cout << "Please enter shoe ID that you want to edit :";
            cin >> id;
            edit(id, sport, female, male);
            break;

        case 4:
            history(sport, female, male);
            break;
        default:

            break;
        }
    }

    return 0;
}
