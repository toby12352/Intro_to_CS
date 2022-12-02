#include <iostream>
#include "hand.h"
#include "card.h"

using namespace std;

Hand::Hand(){
    this->cards = NULL;
    this->n_cards = 0;
}

Hand::~Hand(){
    if (this->cards != NULL){
        delete [] this->cards;
        this->cards = NULL;
    }
}

Hand:: Hand(const Hand& old_hand){
    this->n_cards = old_hand.n_cards;      

    this->cards = new Card [this->n_cards];
    for (int i = 0 ; i < this->n_cards; ++i){
        this->cards[i] = old_hand.cards[i];
    }
}

Hand& Hand::operator=(const Hand& old_hand){
    if(this != &old_hand){
        this->n_cards = old_hand.n_cards;

        if (this->cards != NULL)
            delete[] this->cards;
        
        this->cards = new Card [this->n_cards];
        for (int i = 0 ; i < this->n_cards ; ++i){
            this->cards[i] = old_hand.cards[i];
        }
    }
    return *this;
}

//We need this to access the value from n_cards in Hand class, since it will be transferred from one player to another
//This functions need to be const since the value that goes inside will always be the same
int Hand::get_n_cards() const{
    return this->n_cards;
}

//We need this to set the value from n_cards in Hand class, since it will be assigned different types of values
void Hand::set_n_cards(int new_n_cards){
    this->n_cards = new_n_cards;
}

void Hand::print_cards(){
    for (int i = 0 ; i < this->n_cards; ++i)
        this->cards[i].print_card();
}

void Hand::add_to_hand(Card card_to_add){

    Card* card_temp = new Card [n_cards+1];

    for (int i = 0 ; i < this->n_cards ; ++i)
        card_temp[i] = this->cards[i];

    card_temp[this->n_cards] = card_to_add;

    if (this->cards != NULL)
        delete [] this->cards;

    this->cards = card_temp;
    this->n_cards++;
}

void Hand:: remove_card(int old_card){
    int x = -1;

    for (int i = 0 ; i < this->n_cards; ++i){
        if (this->cards[i].get_rank() == old_card ){
            x = old_card;
            break;
        }
    }

    if (x == -1){
        cout << "Card not found" << endl;
        return;
    }

    for (int i = 0; i < this->n_cards-1; ++i){
        this->cards[i] = this->cards[i+1];
    }

    this->n_cards--;
}