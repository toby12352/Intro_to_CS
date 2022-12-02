#ifndef HAND_H
#define HAND_H

#include "card.h"
using namespace std;

class Hand{
private:
    Card* cards;
    int n_cards;

public:

/*********************************************************************
** Function: Hand
** Description: Construtor for Hand class
** Parameters: ~
** Pre-Conditions: Members not initialized yet
** Post-Conditions: Member done being initialized
*********************************************************************/
    Hand();

/*********************************************************************
** Function: ~Hand
** Description: Deleting memory from heap
** Parameters: ~
** Pre-Conditions: Memories not deleted(Memory leak)
** Post-Conditions: Allocated memories deleted
*********************************************************************/
    ~Hand();

/*********************************************************************
** Function: Hand
** Description: Copy Constructor for Hand class
** Parameters: const Hand& old_hand
** Pre-Conditions: Before copying the member values to another object
** Post-Conditions: Copied the member values to another object
*********************************************************************/
    Hand(const Hand& old_hand);

/*********************************************************************
** Function: Hand& operator
** Description: Assignment Operator Overload for Hand class
** Parameters: const Hand& old_hand
** Pre-Conditions: Before using AOO for Hand Member
** Post-Conditions: Done using AOO for Hand Member
*********************************************************************/
    Hand& operator=(const Hand& old_hand);


/*********************************************************************
** Function: get_n_cards() cinst
** Description: Accessor for n_card member
** Parameters: ~
** Pre-Conditions: Before accessing the n_card member
** Post-Conditions: Done accessing the n_card member
*********************************************************************/
    int get_n_cards()const;

/*********************************************************************
** Function: set_n_cards
** Description: Mutator for n_card member
** Parameters: int new_n_cards
** Pre-Conditions: Before setting n_card member value to new object
** Post-Conditions: Done setting n_card member value to new object
*********************************************************************/
    void set_n_cards(int new_n_cards);


/*********************************************************************
** Function: print_card
** Description: Printing cards info
** Parameters: ~
** Pre-Conditions: Before print cards info
** Post-Conditions: Done printing cards info
*********************************************************************/
    void print_cards();

/*********************************************************************
** Function: add_to_hand
** Description: Adding a card to player's hand
** Parameters: Card card_to_add
** Pre-Conditions: Before adding a card to player's hand
** Post-Conditions: Done adding a card to player's hand
*********************************************************************/
    void add_to_hand(Card);

/*********************************************************************
** Function: remove_card
** Description: Removing a card from player's hand
** Parameters: int old_card
** Pre-Conditions: Before removing the card
** Post-Conditions: Done removing the card
*********************************************************************/
    void remove_card(int);

};
#endif