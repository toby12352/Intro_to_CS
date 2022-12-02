#ifndef DECK_H
#define DECK_H

#include "card.h"
using namespace std;

class Deck{
private:
    Card cards[52];
    int n_cards;

public:

/*********************************************************************
** Function: Deck
** Description: Constructor for Deck class
** Parameters: ~
** Pre-Conditions: Member  classes with no value
** Post-Conditions: Initialized members with value
*********************************************************************/ 
    Deck();
    
//Big Three is not needed in this class since there is not pointer pointing to an array in heap/stack.

/*********************************************************************
** Function: get_n_cards
** Description: Accessor for member class
** Parameters: ~
** Pre-Conditions: Before accessing member 
** Post-Conditions: Accessed card member
*********************************************************************/
    int get_n_cards()const;

/*********************************************************************
** Function: set_n_cards
** Description: Mutator for member class
** Parameters: int new_n_cards
** Pre-Conditions: Before setting the member
** Post-Conditions: After setting the member
*********************************************************************/
    void set_n_cards(int new_n_cards);

/*********************************************************************
** Function: get_card
** Description: Getter for card member
** Parameters: int idx
** Pre-Conditions: Before accessing card member
** Post-Conditions: Accessed card member
*********************************************************************/
    Card get_card(int idx) const;


/*********************************************************************
** Function: print_deck
** Description: Printing cards info
** Parameters: ~
** Pre-Conditions: Before printing
** Post-Conditions: Printed
*********************************************************************/
    void print_deck();

/*********************************************************************
** Function: shuffle_deck
** Description: Shuffling the cards in deck
** Parameters: ~
** Pre-Conditions: Before shuffling the deck
** Post-Conditions: Shuffled the deck
*********************************************************************/
    void shuffle_deck();

/*********************************************************************
** Function: draw_a_card
** Description: Drawing a card from deck
** Parameters: ~
** Pre-Conditions: Before drawing a card
** Post-Conditions: Drew a card
*********************************************************************/
    Card draw_a_card();
};


#endif