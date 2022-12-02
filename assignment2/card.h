#ifndef CARD_H
#define CARD_H

using namespace std;

class Card{
private :
    int rank;
    int suit;

public :

/*********************************************************************
** Function: Card
** Description: initializing members of card class
** Parameters: ~
** Pre-Conditions: member class with no value
** Post-Conditions: member class with values
*********************************************************************/ 
    Card();

/*********************************************************************
** Function: Card
** Description: Assigning member classes to new object
** Parameters: int new_rank, int new_suit
** Pre-Conditions: Members not assigned to the new objects
** Post-Conditions: Members assigned to the new objects
*********************************************************************/ 
    Card(int new_rank, int new_suit);

    //Big Three isn't needed since there's no pointer pointing to array in heap/stack

/*********************************************************************
** Function: get_rank()const
** Description: accessing the rank member class
** Parameters: ~
** Pre-Conditions: not have accessed the rank member class
** Post-Conditions: accessed the rank member class
*********************************************************************/ 
    int get_rank() const;

/*********************************************************************
** Function: get_suit()const
** Description: accessing the suit member of class
** Parameters: ~
** Pre-Conditions: not have accessed the suit member class
** Post-Conditions: accessed the suit member class
*********************************************************************/ 
    int get_suit () const;


/*********************************************************************
** Function: set_rank
** Description: Setting the member of class to new value
** Parameters: int new_rank
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_rank(int);

/*********************************************************************
** Function: set_suit
** Description: Setting the member of class to new value
** Parameters: int new_suit
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_suit(int);


/*********************************************************************
** Function: map_suit
** Description: Mapping suit to their values
** Parameters: ~
** Pre-Conditions: Not have mapped suit member
** Post-Conditions: Mapped rank and suit member
*********************************************************************/ 
    string map_suit();

/*********************************************************************
** Function: map_rank
** Description: Mapping rank to their values
** Parameters: ~
** Pre-Conditions: Not have mapped the rank member
** Post-Conditions: Mapped the rank member
*********************************************************************/ 
    string map_rank();

/*********************************************************************
** Function: print_card
** Description: Printing cards info
** Parameters: ~
** Pre-Conditions: Not have printed the cards
** Post-Conditions: Printed the cards
*********************************************************************/
    void print_card();
};

#endif