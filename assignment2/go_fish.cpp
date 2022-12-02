/*******************************************************************************************************************************
** Program : Go_fish.cpp
** Author: Tun Aung Thaung
** Date: 07/19/2020
** Description: Go Fish card game
** Input: ~
** Output: Cards info
*******************************************************************************************************************************/
#include <iostream>
#include "card.h"
#include "deck.h"
#include "game.h"
#include "hand.h"
#include "player.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char** argv){

    Game game;
    game.start_game();
    
    return 0;
}
