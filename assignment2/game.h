#ifndef GAME_H
#define GAME_H

#include "deck.h"
#include "player.h"
using namespace std;

class Game{
private:
    Deck cards;
    Player players[2];

public:

//Big Three is not needed in this class since there is no pointer pointing to array in heap/stack.

/*********************************************************************
** Function: start_game
** Description: Start of the game
** Parameters: ~
** Pre-Conditions: Just blank program
** Post-Conditions: Game started
*********************************************************************/
    void start_game();

/*********************************************************************
** Function: deal_cards
** Description: Dealing cards to players
** Parameters: ~
** Pre-Conditions: Players with 0 cards in hand
** Post-Conditions: Players with 7 cards in hand
*********************************************************************/
    void deal_cards();

/*********************************************************************
** Function: ask_for_cards
** Description: Player asking for card
** Parameters: ~
** Pre-Conditions: Player not asked for card
** Post-Conditions: Player asked for card
*********************************************************************/
    void ask_for_cards();

};

#endif