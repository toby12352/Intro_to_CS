#ifndef PLAYER_H
#define PLAYER_H

#include "hand.h"
using namespace std;

class Player{
private:
    Hand hand;
    int* books;
    int n_books;

public:

/*********************************************************************
** Function: Player
** Description: Constructor for Player class
** Parameters: ~
** Pre-Conditions: Members not initialized yet
** Post-Conditions: Members done being initialized
*********************************************************************/
    Player();

/*********************************************************************
** Function: Player
** Description: Non-Default constructor for Player class
** Parameters: int num
** Pre-Conditions: Before creating array for books
** Post-Conditions: After creating array for books
*********************************************************************/
    Player(int);


/*********************************************************************
** Function: ~Player
** Description: Deleting memory from heeap
** Parameters: ~
** Pre-Conditions: Memories not deleted(Memory leak)
** Post-Conditions: Allocated memories deleted
*********************************************************************/
    ~Player();

/*********************************************************************
** Function: Player
** Description: Copy Constructor for Player class
** Parameters: const Player&
** Pre-Conditions: Before copying the member values to another object
** Post-Conditions: Copied the member values to another object
*********************************************************************/
    Player (const Player&);

/*********************************************************************
** Function: Player& operator=
** Description: Assignment Operator Overload for Player class
** Parameters: const Player&
** Pre-Conditions: Before using AOO for Player members
** Post-Conditions: Done using AOO for Player members 
*********************************************************************/
    Player& operator=(const Player&);


/*********************************************************************
** Function: get_books() const
** Description: Accessor for books member
** Parameters: ~
** Pre-Conditions: Before accessing the books member
** Post-Conditions: Done accessing the books member
*********************************************************************/
    int* get_books() const;

/*********************************************************************
** Function: get_n_books() const
** Description: Accessor for n_books member
** Parameters: ~
** Pre-Conditions: Before accsessing the n_books member
** Post-Conditions: Done accessing the n_books member
*********************************************************************/
    int get_n_books() const;


/*********************************************************************
** Function: set_books
** Description: Mutator for books member
** Parameters: int* new_books
** Pre-Conditions: Before setting the books member value to new object
** Post-Conditions: Done setting the books member value to new object
*********************************************************************/
    void set_books(int*);

/*********************************************************************
** Function: set_n_books
** Description: Mutator for n_books mmeber
** Parameters: int new_n_books
** Pre-Conditions: Before setting the n_books member value to new object
** Post-Conditions: Done setting the n_books member value to new object
*********************************************************************/
    void set_n_books(int);


/*********************************************************************
** Function: add_a_card_to_hand
** Description: Adding a card to player's hand
** Parameters: Card add_card
** Pre-Conditions: Before adding a card to player's hand
** Post-Conditions: Done adding a card to player's hand
*********************************************************************/
    void add_a_card_to_hand(Card);

/*********************************************************************
** Function: print_the_card
** Description: Printing cards info
** Parameters: ~
** Pre-Conditions: Before print cards info
** Post-Conditions: Done printing cards info
*********************************************************************/
    void print_the_cards();

/*********************************************************************
** Function: remove_card
** Description: Removing a card from player's hand
** Parameters: int old_card
** Pre-Conditions: Before removing the card
** Post-Conditions: Done removing the card
*********************************************************************/
    void remove_the_card(int);
};

#endif