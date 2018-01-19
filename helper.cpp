#include <iostream>
#include <cstdlib>
#include <ctime>
#include "helper.h"
#include "coinFlip.h"
#include "hotCold.h"
#include "IAhotcold.h"

using namespace std;

void main_menu()
{
    int players_option;
    int stay = 1;

    while(stay)
    {
        cout << "FourGames\n" << endl;
        cout << "1 - Coin Flip\n" <<
                "2 - Hot or Cold\n" <<
                "3 - AI Hot or Cold\n" <<
                "4 - Slot Machine\n" <<
                "5 - Exit\n" << endl;

        cout << "Option: ";
        cin >> players_option;

        switch(players_option)
        {
            case 1: start_coinGame();
                    system("cls");
                    break;

            case 2: HC_main(start_hotorcoldGame(), 0);
                    system("cls");
                    break;

            case 3: HC_main(start_hotorcoldGame(), new_guess());
                    system("cls");
                    break;

            case 4: //start_slotmachineGame();
                    system("cls");
                    break;

            case 5: stay = 0;
                    system("cls");
                    break;

            default: cout << "Digite uma opção válida..." << endl;
        }
    }
}

void randomize()
{
    srand(time(NULL));
}

int player_guess()
{
    int number;

    cin >> number;

    return number;
}
