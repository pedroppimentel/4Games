#include <ctime>
#include <iostream>
#include <cstdlib>
#include "helper.h"
#include "IAhotcold.h"

using namespace std;

int start_hotorcoldGame()
{
    return rand() % 100;
}

void HC_main(int game_value, int num)
{
    int stay = 1;
    int n_min = 0;
    int n_max = 100;

    while ( stay )
    {
        cout << "Hot or Cold Game\n"
             << "\nMake a guess between 1 and 100\n";
        if( num == 0 ) num = player_guess();
        else
        {
            num = new_guess(n_min, n_max);
            cout << "AI Guess: " << num << endl;
        }

        if ( num > game_value )
        {
            cout << "\nAre you a dreamer? Thinking too high!\nTry a lower number\nPress something ...\n\n";
            cin.get();
            cin.ignore();
            n_max = num;
            system("cls");
        }

        if ( num < game_value )
        {
            cout << "\nAfraid to risk?\nTry a higher number\nPress something ...\n\n";
            cin.get();
            cin.ignore();
            n_min = num;
            system("cls");
        }

        if ( num == game_value )
        {
            cout << "\nCONGRATS!!! U DID IT!\n\nThe right number was " << game_value;
            stay = 0;
            cin.get();
            cin.ignore();
        }
    }
}
