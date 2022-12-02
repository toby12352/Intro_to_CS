#include <iostream>
#include "player.h"
#include "game.h"

using namespace std;

void Game::start_game(){
  cards.shuffle_deck();

  deal_cards();

  ask_for_cards();

}

void Game::deal_cards(){
  for (int i = 0; i < 7; i++)
    players[0].add_a_card_to_hand(cards.get_card(i));

  for (int i = 0; i < 7; i++)
    players[1].add_a_card_to_hand(cards.get_card(i+7));

  cout << "Player 1 cards" << endl;
  players[0].print_the_cards();
  cout << endl;
  cout << "Computer cards" << endl;
  players[1].print_the_cards();
}

void Game::ask_for_cards(){
  int request_rank;
  cout <<"Which rank card would you like to ask?(You must have at least have a same rank card of what you ask."<< endl;
  cin  >> request_rank;
}