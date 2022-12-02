#include <iostream>
#include "animal.h"

using namespace std;

Animal::Animal(){
    this->age = 0;
    this->price = 0;
    this->food_cost = 0;
}

int Animal:: get_age() const{
    return this->age;
}

int Animal:: get_price() const{
    return this->price;
}

float Animal:: get_food_cost() const{
    return this->food_cost;
}

void Animal:: set_age(int new_age){
    this->age = new_age;
}

void Animal:: set_price(int new_price){
    this->price = new_price;
}

void Animal:: set_food_cost(float new_food_cost){
    this->food_cost = new_food_cost;
}

void Animal:: increase_age(){
    this->age++;
}