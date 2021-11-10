#include "SportShoe.h"
#include "Function.h"
//#include "FemaleShoe.h"
//#include "MaleShoe.h"

#include <iostream>
using namespace std;

void shoes()
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
        sport_shoe();
        break;

        // case 2:
        // void female_shoe();
        //     FemaleShoe fshoe();
        //     break;
        //
        //     MaleShoe mshoe();
        //     break;

        // default:
        //     cout << "There is not this type of shoe!!!\n";
        //     break;
    }
}

// SportShoe::~SportShoe()
// {
// }
