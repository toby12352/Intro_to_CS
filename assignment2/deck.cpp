#include <iostream>
#include "deck.h"
#include "card.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

Deck::Deck(){
    int j = -1;
    for (int i = 0; i < 52; ++i){
        if (i % 13 == 0) {
            j++;
        }
        cards[i].set_rank(i%13);
        cards[i].set_suit(j);
    }
    n_cards = 52;
}

//We need this to access the value from n_cards in Deck class, since it will be transferred from one player to another
//This functions need to be const since the value that goes inside will always be the same
int Deck::get_n_cards()const{
    return this->n_cards;
}

//We need this to set the value from n_cards in Deck class, since it will be assigned different types of values
void Deck::set_n_cards(int new_n_cards){
    this->n_cards = new_n_cards;
}

//We need this to access the value from card in deck card member, since it will be transferred from one player to another
//This functions need to be const since the value that goes inside will always be the same
Card Deck::get_card(int idx) const{
    return this->cards[idx];
}

void Deck::print_deck(){
    for (int i = 0; i < this->n_cards; ++i){
        cards[i].print_card();
    }
}

void Deck::shuffle_deck(){
    srand(time(NULL));

    for (int i = 0 ; i < 1000; ++i){
        int x = rand() % 52;
        int j = rand() % 52;

        Card temp;
        temp = cards[j];
        cards[j] = cards[x];
        cards[x] = temp;
    }
}

Card Deck::draw_a_card(){
    return cards[--n_cards];
    cout << n_cards << endl;
}