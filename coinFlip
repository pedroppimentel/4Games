#include "coinFlip.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void start_coinGame()
{
    int wait = clock();

    while( clock() - wait < 3000 ) //wait 3 seconds
    {
        cout << "Flipping the coin ";
        system("cls");
        cout << "Flipping the coin . .";
        system("cls");
        cout << "Flipping the coin . . .";
        system("cls");
    }

    verify_the_coin(flip_the_coin());
}

int flip_the_coin()
{
    return rand() % 2;
}

void verify_the_coin(int result)
{
    if( result == 1)
    {
        cout << "You gotta HEAD! \n" << endl;
        cin.get();
        cin.ignore();
    }
    else
    {
        cout << "You got the TAILS! \n" << endl;
        cin.get();
        cin.ignore();
    }
}
