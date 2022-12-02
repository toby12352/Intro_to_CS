#include <iostream>
#include "player.h"
#include "hand.h"

using namespace std;

Player::Player(){
    this->books = 0;
    this->n_books = 0;
}

Player::Player(int num) : n_books(num){
    this->books = new int [num];
}

Player::~Player(){
    if (this->books != NULL){
        delete [] this->books;
        this->books = NULL;
    }
}

Player::Player (const Player& old_player){
    this->n_books = old_player.n_books;

    this->books = new int [this->n_books];
    for (int i = 0 ; i < this->n_books; ++i)
        this->books[i] = old_player.books[i];
    
}

Player& Player::operator=(const Player& old_player){
    if (this != &old_player){   
        this->n_books = old_player.n_books;

        if (this->books != NULL){
            delete [] this->books;
            this->books = NULL;
        }

        this->books = new int [this->n_books];
        for (int i = 0 ; i < this->n_books; ++i)
        this->books[i] = old_player.books[i];
    }
}

//We need this to access the value from books in player class, since it will be transferred from one player to another
//This functions need to be const since the value that goes inside will always be the same
int* Player::get_books() const{
    return this->books;
}

//We need this to access the value from n_books in player class, since it will be transferred from one player to another
//This functions need to be const since the value that goes inside will always be the same
int Player::get_n_books() const{
    return this->n_books;
}

//We need this to set the value from books in Player class, since it will be assigned different types of values
void Player::set_books(int* new_books){
    this->books = new_books;
}

//We need this to set the value from n_books in Player class, since it will be assigned different types of values
void Player::set_n_books(int new_n_books){
    this->n_books = new_n_books;
}

void Player::add_a_card_to_hand(Card add_card){
    this->hand.add_to_hand(add_card); 
}

void Player::print_the_cards(){
    this->hand.print_cards();
}

void Player::remove_the_card(int old_card){
    this->hand.remove_card(old_card);
}
