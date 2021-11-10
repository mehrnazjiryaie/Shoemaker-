#include <iostream>
#include "SportShoe.h"
// #include "FemaleShoe.h"
// #include "MaleShoe.h"
//#include "Decor.h"
#include "Function.h"
using namespace std;

int main(int argc, char const *argv[])
{
    srand(static_cast<unsigned int>(time(0)));

    cout << "-------WELCOME TO SHOE SHOP-------- \n";
    cout << "               MENU                 \n";
    cout << "1 . Creat shoes                     \n";
    cout << "2 . Show a special shoes            \n";
    cout << "3 . History                         \n\n";

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        shoes();
        break;
        // case 2:
        //     break;
        // case 3:
        //     break;
        // default:
        //     break;
    }

    return 0;
}
