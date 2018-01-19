#include <iostream>
#include <locale>
#include "coinFlip.h"
#include "helper.h"

using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    randomize();
    //menu
        //choose the game
    main_menu();

        //coin flip game
            //read the player guess and then show a boolean random answer

        //hot or cold game
            //read the player guess and then show if he is hot or cold related to the answer

        //AI hot cold
            //AI that solves the hot cold game and return the number of guesses

        //slot machine game
            //player presses the button and the slot machine return 3 figures
            //are figures equal?
            //two equals?
            //none?
    return 0;
}
