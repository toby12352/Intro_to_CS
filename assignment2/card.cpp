#include <iostream>
#include "card.h"

using namespace std;

Card::Card(){
    this->rank = 0;
    this->suit = 0;
}

Card::Card(int new_rank, int new_suit){
    this->rank = new_rank;
    this->suit = new_suit;
}

//We need this to access the value from rank card, since it will be transferred from one player to another
//This functions need to be const since the value that goes inside will always be the same
int Card::get_rank() const{
    return this->rank;
}

//We need this to access the value from suit card, since it will be transferred from one player to another
//This functions need to be const since the value that goes inside will always be the same
int Card::get_suit() const{
    return this->suit;
}

//We need this to set the value from rank card this, since it will be assigned different types of values
void Card::set_rank(int new_rank){
    this->rank = new_rank;
}

//We need this to set the value from suit card this, since it will be assigned different types of values
void Card::set_suit(int new_suit){
    this->suit = new_suit;
}

string Card::map_suit(){
    if (this->suit == 0) return "Diamond";
    else if (this->suit == 1) return "Spade";
    else if (this->suit == 2) return "Club";
    else if (this->suit == 3) return "Heart";
}

string Card::map_rank(){
    if (this->rank == 0) return "Ace";
    else if (this->rank == 1) return "2";
    else if (this->rank == 2) return "3";
    else if (this->rank == 3) return "4";
    else if (this->rank == 4) return "5";
    else if (this->rank == 5) return "6";
    else if (this->rank == 6) return "7";
    else if (this->rank == 7) return "8";
    else if (this->rank == 8) return "9";
    else if (this->rank == 9) return "10";
    else if (this->rank == 10) return "Jack";
    else if (this->rank == 11) return "Queen";
    else if (this->rank == 12) return "King";

}

void Card::print_card(){
    cout << map_suit() <<" " << map_rank() << endl;
}