#include <iostream>
#include "monkey.h"

using namespace std;

Monkey::Monkey(){
    int buy_price = 15000;
    int sell_price = this->buy_price /2;
}

int Monkey::get_buy_price() const{
    return this->buy_price;
}

int Monkey::get_sell_price() const{
    return this->sell_price;
}

void Monkey::set_buy_price(int new_buy_price){
    this->buy_price = new_buy_price;
}

void Monkey::set_sell_price(int new_sell_price){
    this->sell_price = new_sell_price;
}