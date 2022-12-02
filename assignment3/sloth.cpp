#include <iostream>
#include "sloth.h"

using namespace std;

Sloth::Sloth(){
    int buy_price = 2500;
    int sell_price = this->buy_price /2;
}

int Sloth::get_buy_price() const{
    return this->buy_price;
}

int Sloth::get_sell_price() const{
    return this->sell_price;
}

void Sloth::set_buy_price(int new_buy_price){
    this->buy_price = new_buy_price;
}

void Sloth::set_sell_price(int new_sell_price){
    this->sell_price = new_sell_price;
}