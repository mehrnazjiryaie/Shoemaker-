#include <iostream>
#include "SportShoe.h"
#include "FemaleShoe.h"
#include "MaleShoe.h"
using namespace std;
int main(int argc, char const *argv[])
{

    cout << "WELCOME TO SHOE SHOP\n";
    cout << "which kind of shoe do you want?\n";
    cout << " ------------------------\n";
    cout << "| 1 --> Sport Shoe       |\n"    ;
    cout << "| 2 --> Female Shoe      |\n";
    cout << "| 3 --> Male Shoe        |\n";
    cout <<  "------------------------\n";
    unsigned int num;
    cin >> num;
    switch (num)
    {
    case 1:
        SportShoe spshoe();
        break;
    case 2:
        FemaleShoe fshoe();
        break;
    case 3:
        MaleShoe mshoe();
        break;

    default:
        cout << "There is not this type of shoe!!!\n";
        break;
    }

    return 0;
}
