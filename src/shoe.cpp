#include "SportShoe.h"
#include "FemaleShoe.h"
#include "MaleShoe.h"
#include <iostream>
using namespace std;



void shoe()
{
    cout << "WELCOME TO SHOE SHOP\n";
    cout << "which kind of shoe do you want?\n";
    cout << " ------------------------\n";
    cout << "| 1 --> Sport Shoe       |\n";
    cout << "| 2 --> Female Shoe      |\n";
    cout << "| 3 --> Male Shoe        |\n";
    cout << " ------------------------\n";

    unsigned int num;

    cin >> num;

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

    switch (num)
    {
    case 1:
        cout << "What color do you want for shoelase?\n";
        cin >> shoelaseColor;
        SportShoe spshoe(size, shoelaseColor, bodyColor, solesColor);
        cout << "Your shoes has " << spshoe.get_shoelase() << "" break;
        // case 2:
        //     FemaleShoe fshoe();
        //     break;
        // case 3:
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
