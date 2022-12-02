#include <iostream>
#include "sea_otter.h"

using namespace std;

Sea_Otter::Sea_Otter(){
    int buy_price = 5000;
    int sell_price = this->buy_price /2;
}

int Sea_Otter::get_buy_price() const{
    return this->buy_price;
}

int Sea_Otter::get_sell_price() const{
    return this->sell_price;
}

void Sea_Otter::set_buy_price(int new_buy_price){
    this->buy_price = new_buy_price;
}

void Sea_Otter::set_sell_price(int new_sell_price){
    this->sell_price = new_sell_price;
}