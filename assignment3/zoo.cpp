#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "zoo.h"
#include <stdlib.h>
#include "animal.h"
#include "monkey.h"
#include "sea_otter.h"
#include "sloth.h"

using namespace std;

Zoo::Zoo(){
    srand(time(NULL));
    this->monkey = NULL;
    this->otter = NULL;
    this->sloth = NULL;
    this->month = 1;
    this->money = 50000;
    this->monkey_count = 0;
    this->otter_count = 0;
    this->sloth_count = 0;
    this->attendance = 0;
    this->base_cost = rand()%51 + 75;
    this->food_type = 0;
    this->total_animals = 0;
    this->monkeybabies = 0;
    this->monkeyadults = 0;
    this->otterbabies = 0;
    this->otteradults = 0;
    this->slothbabies = 0;
    this->slothadults = 0;
}

int Zoo::get_month() const{
    return this->month;
}

int Zoo::get_money() const{
    return this->money;
}

int Zoo::get_monkey_count() const{
    return this->monkey_count;
}

int Zoo::get_otter_count() const{
    return this->otter_count;
}

int Zoo::get_sloth_count() const{
    return this->sloth_count;
}

int Zoo::get_attendance() const{
    return this->attendance;
}

int Zoo::get_base_cost() const{
    return this->base_cost;
}

int Zoo::get_food_type() const{
    return this->food_type;
}

int Zoo::get_total_animals() const{
    return this->total_animals;
}

int Zoo::get_monkeybabies() const{
    return this->monkeybabies;
}

int Zoo::get_monkeyadults() const{
    return this->monkeyadults;
}

int Zoo::get_otterbabies() const{
    return this->otterbabies;
}

int Zoo::get_otteradults() const{
    return this->otteradults;
}

int Zoo::get_slothbabies() const{
    return this->slothbabies;
}

int Zoo::get_slothadults() const{
    return this->slothadults;
}

void Zoo::set_month(int new_month){
    this->month = new_month;
}

void Zoo::set_money(double new_money){
    this->money = new_money;
}

void Zoo::set_monkey_count(int new_monkey_count){
    this->monkey_count = new_monkey_count;
}

void Zoo::set_otter_count(int new_otter_count){
    this->otter_count = new_otter_count;
}

void Zoo::set_sloth_count(int new_sloth_count){
    this->sloth_count = new_sloth_count;
}

void Zoo::set_attendance(int new_attendance){
    this->attendance = new_attendance;
}

void Zoo::set_base_cost(double new_base_cost){
    this->base_cost = new_base_cost;
}

void Zoo::set_food_type(int new_food_type){
    this->food_type = new_food_type;
}

void Zoo::set_total_animals(int new_total_animals){
    this->total_animals = new_total_animals;
}

void Zoo::set_monkeybabies(int new_monkeybabies){
    this->monkeybabies = new_monkeybabies;
}

void Zoo::set_monkeyadults(int new_monkeyadults){
    this->monkeyadults = new_monkeyadults;
}

void Zoo::set_otterbabies(int new_otterbabies){
    this->otterbabies = new_otterbabies;
}

void Zoo::set_otteradults(int new_otteradults){
    this->otteradults = new_otteradults;
}

void Zoo::set_slothbabies(int new_slothbabies){
    this->slothbabies = new_slothbabies;
}

void Zoo::set_slothadults(int new_slothadults){
    this->slothadults = new_slothadults;
}

void Zoo::sell_inside(){
    int sell_num;
    cout << "How many would you like to sell?" << endl;
    cin  >> sell_num;
    if (sell_num == 1){}

    else{
        cout << "\nSorry! You can only sell up to one animal" << endl;
        sell_inside();
    }
    
}

void Zoo::remove_monkey(){
    Monkey* monkey_temp = new Monkey[this->monkey_count];

    for (int i = 0; i < this->monkey_count-1; ++i)
        monkey_temp[i] = this->monkey[i];
    
    if (this->monkey != NULL)
        delete[] this->monkey;
    
    this->monkey = monkey_temp;
}


void Zoo::sell_monkey(){
    remove_monkey();
    this->monkey_count -= 1;
    this->total_animals -= 1;
    int monkey_sell_price = 7500;
    cout << endl << "One Monkey has been sold." << endl;
    cout << "$7500 has been added to your bank." << endl << endl;
    this->money += monkey_sell_price;
    cout << "Remaining Money : $" << this->money << endl;
}

//This function exceeds the limit 15 lines due to the conditions of the selling babies and adults and error handling
void Zoo::sell_monkeyoptions(){
    int sell;
    cout << endl << "Which monkey would you like to sell?" << endl;
    cout << "1) A baby" << endl;
    cout << "2) An adult" << endl;
    cin  >> sell;

    if (sell < 1 || sell > 2){
        cout << endl << "Invalid input. Please try again." << endl;
        sell_monkeyoptions();
    }

    else if (sell == 1 && this->monkeybabies > 0){
        sell_inside();
        this->monkeybabies -= 1;
        sell_monkey();
    }

    else if (sell == 2 && this->monkeyadults > 0){
        sell_inside();
        this->monkeyadults -= 1;
        sell_monkey();
    }

    else if (sell == 1 && this->monkeybabies <= 0){
        cout << endl << "You don't have enough baby monkey to sell." << endl;
        sell_monkeyoptions();
    }

    else if (sell == 2 && this->monkeybabies <= 0){
        cout << endl << "You don't have enough adult monkey to sell." << endl;
        sell_monkeyoptions();
    }
}

void Zoo::remove_otter(){
    Sea_Otter* otter_temp = new Sea_Otter[this->otter_count];

    for (int i = 0; i < this->otter_count-1; ++i)
        otter_temp[i] = this->otter[i];
    
    if (this->otter != NULL)
        delete[] this->otter;
    
    this->otter = otter_temp;
}

void Zoo::sell_otter(){
    remove_otter();
    this->otter_count -= 1;
    this->total_animals -= 1;
    int otter_sell_price = 2500;
    cout << endl << "One otter has been sold." << endl;
    cout << "$2500 has been added to your bank." << endl << endl;
    this->money += otter_sell_price;
    cout << "Remaining Money : $" << this->money << endl;
}

//This function exceeds the limit 15 lines due to the conditions of the selling babies and adults and error handling
void Zoo::sell_otteroptions(){
    int sell;
    cout << endl << "Which otter would you like to sell?" << endl;
    cout << "1) A baby" << endl;
    cout << "2) An adult" << endl;
    cin  >> sell;

    if (sell < 1 || sell > 2){
        cout << endl << "Invalid input. Please try again." << endl;
        sell_otteroptions();
    }

    else if (sell == 1 && this->otterbabies > 0){
        sell_inside();
        this->otterbabies -= 1;
        sell_otter();
    }

    else if (sell == 2 && this->otteradults > 0) {
        sell_inside();
        this->otteradults -= 1;
        sell_otter();
    }

    else if (sell == 1 && this->otterbabies <= 0){
        cout << endl << "You don't have enough baby otter to sell." << endl;
        sell_otteroptions();
    }

    else if (sell == 2 && this->otterbabies <= 0){
        cout << endl << "You don't have enough adult otter to sell." << endl;
        sell_otteroptions();
    }
}

void Zoo::remove_sloth(){
    Sloth* sloth_temp = new Sloth[this->sloth_count];

    for (int i = 0; i < this->sloth_count-1; ++i)
        sloth_temp[i] = this->sloth[i];
    
    if (this->sloth != NULL)
        delete[] this->sloth;
    
    this->sloth = sloth_temp;
}

void Zoo::sell_sloth(){
    remove_sloth();
    this->sloth_count -= 1;
    this->total_animals -= 1;
    int sloth_sell_price = 1250;
    cout << endl << "One sloth has been sold." << endl;
    cout << "$1250 has been added to your bank." << endl << endl;
    this->money += sloth_sell_price;
    cout << "Remaining Money : $" << this->money << endl;
}

//This function exceeds the limit 15 lines due to the conditions of the selling babies and adults and error handling
void Zoo::sell_slothoptions(){
    int sell;
    cout << endl << "Which sloth would you like to sell?" << endl;
    cout << "1) A baby" << endl;
    cout << "2) An adult" << endl;
    cin  >> sell;

    if (sell < 1 || sell > 2){
        cout << endl << "Invalid input. Please try again." << endl;
        sell_slothoptions();
    }

    else if (sell == 1 && this->slothbabies > 0){
        sell_inside();
        this->slothbabies -= 1;
        sell_sloth();
    }

    else if (sell == 2 && this->slothadults > 0){
        sell_inside();
        this->slothadults -= 1;
        sell_sloth();
    }

    else if (sell == 1 && this->slothbabies <= 0){
        cout << endl << "You don't have enough baby sloth to sell." << endl;
        sell_slothoptions();
    }

    else if (sell == 2 && this->slothbabies <= 0){
        cout << endl << "You don't have enough adult sloth to sell." << endl;
        sell_slothoptions();
    }
}

//This function exceeds the limit 15 lines due to the conditions of the selling babies and adults and error handling
void Zoo::function2_choices(int sell_choice){
    if (sell_choice == 1 && this->monkey_count > 0) sell_monkeyoptions();

    else if (sell_choice == 2 && this->otter_count > 0) sell_otteroptions();

    else if (sell_choice == 3 && this->sloth_count > 0) sell_slothoptions();

    else if (sell_choice == 4){}

    else if (sell_choice == 1 && this->monkey_count <= 0){
        cout << "You don't have monkey in the zoo." << endl;
        function2();
    }

    else if (sell_choice == 2 && this->otter_count <= 0){
        cout << "You don't have sea otter in the zoo." << endl;
        function2();
    }

    else if (sell_choice == 3 && this->sloth_count <= 0){
        cout << "You don't have sloth in the zoo." << endl;
        function2();
    }
    
    else if (sell_choice > 4 || sell_choice < 1){
        cout << "Invalid Input. Please try again." << endl << endl;
        function2();
    }
}

void Zoo::function2(){
    int sell_choice;
    cout << endl;
    cout << "What Animal would you like to sell?" << endl;
    cout << "1) Monkey - $7500" << endl;
    cout << "2) Sea Otter - $2500" << endl;
    cout << "3) Sloth - $1250" << endl;
    cout << "4) Not sell anything" << endl;
    cin >> sell_choice;
    function2_choices(sell_choice);
}

void Zoo::increase_monkey_age(){
    for (int i = 0 ; i < this->monkey_count; ++i)
        monkey[i].increase_age();
}

void Zoo::add_monkey(int count){
    Monkey* monkey_temp = new Monkey[this->monkey_count];

    for (int i = 0 ; i < this->monkey_count - count; ++i)
        monkey_temp[i] = this->monkey[i];

    for (int i = 1 ; i < count - 1; ++i)
        monkey_temp[this->monkey_count - i].set_age(24);
    
    if (this->monkey != NULL)
        delete [] this->monkey;
    
    this->monkey = monkey_temp;
}

void Zoo::buy_monkey_inside(int total_cost, int count){
    total_cost = 15000*count;
    if ((count >= 0 && count < 3) && total_cost < this->money){
        this->money -= total_cost;
        cout << "Remaining Money : $" << this->money << endl;
        this->monkey_count += count;
        this->total_animals += count;
        add_monkey(count);
        this->monkeyadults += count;
    }

    else if ((count >= 0 && count < 3) && total_cost >= this->money){
        cout << "Not enough Money, please put in number less than " << count << "." << endl;
        buy_monkey();
    }

    else{
        cout << endl << "Your total buying number can't be less than 0 or greater than 2." << endl << endl;
        buy_monkey();
    }
}
 
void Zoo::buy_monkey(){
    int count;
    int total_cost;
    cout << "How many Monkey would you like to buy :";
    cin  >> count;
    buy_monkey_inside(total_cost, count);
}

void Zoo::increase_otter_age(){
    for (int i = 0 ; i < this->otter_count; ++i)
        otter[i].increase_age();
}

void Zoo::add_otter(int count){
    Sea_Otter* otter_temp = new Sea_Otter[this->otter_count];

    for (int i = 0 ; i < this->otter_count - count; ++i)
        otter_temp[i] = this->otter[i];

    for (int i = 1 ; i < count - 1; ++i)
        otter_temp[this->otter_count - i].set_age(24);
    
    if (this->otter != NULL)
        delete [] this->otter;
    
    this->otter = otter_temp;
}

void Zoo::buy_otter_inside(int total_cost, int count){
    total_cost = 5000*count;
    if ((count >= 0 && count < 3) && total_cost <= this->money){
        this->money -= total_cost;
        cout << "Remaining Money : $" << this->money << endl;
        this->otter_count += count;
        this->total_animals += count;
        add_otter(count);
        this->otteradults += count;
    }

    else if ((count >= 0 && count < 3) && total_cost > this->money){
        cout << "Not enough Money, please put in number less than " << count << "." << endl;
        buy_otter();
    }

    else{
        cout << endl << "Your total buying number can't be less than 0 or greater than 2." << endl << endl;
        buy_otter();
    }
}
 
void Zoo::buy_otter(){
    int count;
    int total_cost;
    cout << "How many otter would you like to buy :";
    cin  >> count;
    buy_otter_inside(total_cost, count);
}

void Zoo::increase_sloth_age(){
    for (int i = 0 ; i < this->sloth_count; ++i)
        sloth[i].increase_age();
}

void Zoo::add_sloth(int count){
    Sloth* sloth_temp = new Sloth[this->sloth_count];

    for (int i = 0 ; i < this->sloth_count - count; ++i)
        sloth_temp[i] = this->sloth[i];

    for (int i = 1 ; i < count + 1; ++i)
        sloth_temp[this->sloth_count - i].set_age(24);
    
    if (this->sloth != NULL)
        delete [] this->sloth;
    
    this->sloth = sloth_temp;
}

void Zoo::buy_sloth_inside(int total_cost, int count){
    total_cost = 2500*count;
    if ((count >= 0 && count < 3) && total_cost <= this->money){
        this->money -= total_cost;
        cout << "Remaining Money : $" << this->money << endl;
        this->sloth_count += count;
        this->total_animals += count;
        add_sloth(count);
        this->slothadults += count;
    }

    else if ((count >= 0 && count < 3) && total_cost > this->money){
        cout << "Not enough Money, please put in number less than " << count << "." << endl;
        buy_sloth();
    }

    else{
        cout << endl << "Your total buying number can't be less than 0 or greater than 2." << endl << endl;
        buy_sloth();
    }
}
 
void Zoo::buy_sloth(){
    int count;
    int total_cost;
    cout << "How many sloth would you like to buy :";
    cin  >> count;
    buy_sloth_inside(total_cost, count);
}

//This function exceeds the limit 15 lines due to the conditions of the buying babies and adults and error handling
void Zoo::function1_choices(int buy_choice){
    if (buy_choice == 1 && this->money >= 15000) buy_monkey();

    else if (buy_choice == 2 && this->money >= 5000) buy_otter();

    else if (buy_choice == 3 && this->money >= 2500) buy_sloth();

    else if (buy_choice == 4){}

    else if (buy_choice == 1 && this->money < 15000){
        cout << "You don't have enough money for monkey." << endl;
        function1();
    }

    else if (buy_choice == 2 && this->money < 5000){
        cout << "You don't have enough money for sea otter." << endl;
        function1();
    }

    else if (buy_choice == 3 && this->money < 2500){
        cout << "You don't have enough money for sloth." << endl;
        function1();
    }

    else if (buy_choice > 4 || buy_choice < 1){
        cout << "Invalid Input. Please try again." << endl << endl;
        function1();
    }

}

void Zoo::function1(){
    int buy_choice;
    cout << endl;
    cout << "What Animal would you like to buy?" << endl;
    cout << "1) Monkey - $15000" << endl;
    cout << "2) Sea Otter - $5000" << endl;
    cout << "3) Sloth - $2500" << endl;
    cout << "4) Not buy anything" << endl;
    cin >> buy_choice;
    function1_choices(buy_choice);
}

void Zoo::food_quality_display(){
    cout << "Choose type of food to feed the animals." << endl;
    cout << "1) Premium Quality - Double the cost, Half the sickness percentage" << endl;
    cout << "2) Regular - Normal price" << endl;
    cout << "3) Cheap - Half the normal price, Double the percentage" << endl;
}

void Zoo::food_quality(){
    if (this->total_animals > 0){
        food_quality_display();
        cin  >> this->food_type;

        if (this->food_type == 1){
            cout << "\nYou've bought the premium quality for this month." << endl;
            this->base_cost = this->base_cost * 2;
        }

        else if (this->food_type == 2){
            cout << "\nYou've bought the regular quality for this month." << endl;
        }

        else if (this->food_type == 3){
            cout << "\nYou've bought the cheap quality for this month." << endl;
            this->base_cost = this->base_cost * 0.5;
        }

        else if (this->food_type < 1 || this->food_type > 3){
            cout << "\nInvalid Input.Please try again." << endl;
            food_quality();
        }
    }
}

void Zoo::food_cost(){
    double total_cost =  (this->monkey_count * (this->base_cost*4)) + (this->otter_count * (this->base_cost*2)) + (this->sloth_count * this->base_cost);
    this->money -= total_cost;

    if (this->money <= 0){
        cout << "\n===================================================================" << endl;
        cout << "Month " << this->month << " Food Cost : " << total_cost << endl;
        cout << "Month " << this->month << " Remaining Money : $" << this->money << endl;
        cout << "Game's Over." << endl;
        cout << "You can't afford food cost anymore." << endl;
        cout << "Thank you for playing the game." << endl;
        cout << "===================================================================" << endl << endl;
    }

    else{
        cout << "\n===================================================================" << endl;
        cout << "Month " << this->month << " Food Cost : " << total_cost << endl;
        cout << "Month " << this->month << " Remaining Money : $" << this->money << endl;
        cout << "===================================================================" << endl << endl;
    }
}

void Zoo::revenue(){
    srand(time(NULL));
    this->attendance = rand()%50 + 51;
    this->attendance = this->attendance * this->total_animals;
    double babyrevenue = (this->monkeybabies * (4* this->attendance)) + (this->otterbabies * (0.25* this->attendance)) + (this->slothbabies * (0.25 * this->attendance));
    double adultrevenue = (this->monkeyadults * (2 * this->attendance)) + (this->otteradults * (0.5 * this->attendance)) + (this->slothadults * (0.5 * this->attendance)); 
    double total_revenue = babyrevenue + adultrevenue;
    this->money += total_revenue;
    cout << "\n===================================================================" << endl;
    cout << "Month " << this->month << " attendance : " << this->attendance << endl;
    cout << "Month " << this->month << " revenue : $" << total_revenue << endl;
    cout << "Month " << this->month << " Total Money : $" << this->money << endl;
    cout << "===================================================================" << endl << endl;
}

void Zoo::remove_sickmonkey(int rand_monkey){
    Monkey* monkey_temp = new Monkey [this->monkey_count-1];
    int j = 0;
    for (int i = 0; i < this->monkey_count; i++) {
        if (i == rand_monkey) {
            continue;
        }
        monkey_temp[j] = this->monkey[i];
        j++;
    }

    if (this->monkey != NULL)
        delete [] this->monkey;

    this->monkey = monkey_temp;
}

//This function exceeds the limit 15 lines because of the outputs that will make the program display looks better and more understanding
void Zoo::event1_monkeybaby(int rand_monkey){
    cout << "A baby monkey is sick. It will cost $15000 to cure." << endl;
    if (this->money < 15000){
        cout << "Unfortunately, you don't have enough money to cure the animal." << endl;
        cout << "The baby monkey died." << endl;
        remove_sickmonkey(rand_monkey);
        this->monkey_count -= 1;
        this->monkeybabies -= 1;
        this->total_animals -= 1;
    }
    else if (this->money >= 15000 && this->monkeybabies > 0){
        cout << "\n===================================================================" << endl;
        cout << "$15000 will be deducted from my bank account." << endl;
        this->money -= 15000;
        cout << "Remaining Money : $" << this->money << endl;
        cout << "===================================================================" << endl << endl;
    }
    else if (this->monkeybabies == 0){
        cout << "Good News. All your animals escape the sickness month." << endl;
    }
}

void Zoo::event1_monkeyadult(int rand_monkey){
    cout << "An adult monkey is sick. It will cost $7500 to cure." << endl;
    if (this->money < 7500){
        cout << "Unfortunately, you don't have enough money to cure the animal." << endl;
        cout << "One adult monkey died." << endl;
        remove_sickmonkey(rand_monkey);
        this->monkey_count -= 1;
        this->monkeyadults -= 1;
        this->total_animals -= 1;
    }
    else if (this->money >= 7500 && this->monkeyadults > 0){
        cout << "$7500 will be deducted from my bank account." << endl;
        this->money -= 7500;
        cout << "Remaining Money : $" << this->money << endl;
    }
    else if (this->monkeyadults == 0){         
        cout << "Good News. All your animals escape the sickness month." << endl;
    }
}

void Zoo::event1_monkey(){
    if (this->monkey_count > 0 ){
        int rand_monkey = rand()%this->monkey_count;
        if (this->monkey[rand_monkey].get_age() <= 6 && this->monkeybabies > 0){
            event1_monkeybaby(rand_monkey);
        }
        else if (this->monkey[rand_monkey].get_age() > 6 && this->monkeyadults > 0){
            event1_monkeyadult(rand_monkey);
        }
        else if ((this->monkey[rand_monkey].get_age() <= 6 || this->monkey[rand_monkey].get_age() > 6) && (this->monkeyadults == 0 || this->monkeybabies == 0)){
            cout << "Great News! All your animals escape this sickness month." << endl;
        }
    }
    else if (this->monkey_count == 0){
        cout << "Good News. All your animals escape the sickness month." << endl;
    }
}

void Zoo::remove_sickotter(int rand_otter){
    Sea_Otter* otter_temp = new Sea_Otter [this->otter_count-1];
    int j = 0;
    for (int i = 0; i < this->otter_count; i++) {
        if (i == rand_otter) {
            continue;
        }
        otter_temp[j] = this->otter[i];
        j++;
    }

    if (this->otter != NULL)
        delete [] this->otter;

    this->otter = otter_temp;
}

//This function exceeds the limit 15 lines because of the outputs that will make the program display looks better and more understanding
void Zoo::event1_otterbaby(int rand_otter){
    cout << "A baby otter is sick. It will cost $5000 to cure." << endl;
    if (this->money < 5000){
        cout << "\nUnfortunately, you don't have enough money to cure the animal." << endl;
        cout << "The baby otter died." << endl;
        remove_sickotter(rand_otter);
        this->otter_count -= 1;
        this->otterbabies -= 1;
        this->total_animals -= 1;
    }
    else if (this->money >= 5000 && this->otterbabies > 0){
        cout << "\n===================================================================" << endl;
        cout << "\n$5000 will be deducted from my bank account." << endl;
        this->money -= 5000;
        cout << "Remaining Money : $" << this->money << endl;
        cout << "===================================================================" << endl << endl;
    }
    else if (this->otterbabies == 0){
        cout << "Good News. All your animals escape the sickness month." << endl;
    }
}

//This function exceeds the limit 15 lines because of the outputs that will make the program display looks better and more understanding
void Zoo::event1_otteradult(int rand_otter){
    cout << "\nAn adult otter is sick. It will cost $2500 to cure." << endl;
    if (this->money < 2500){
        cout << "\nUnfortunately, you don't have enough money to cure the animal." << endl;
        cout << "One adult otter died." << endl;
        remove_sickotter(rand_otter);
        this->otter_count -= 1;
        this->otteradults -= 1;
        this->total_animals -= 1;
    }
    else if (this->money >= 2500 && this->otteradults > 0){
        cout << "\n$2500 will be deducted from my bank account." << endl;
        this->money -= 2500;
        cout << "Remaining Money : $" << this->money << endl;
    }
    else if (this->otteradults == 0){         
        cout << "Good News. All your animals escape the sickness month." << endl;
    }
}

void Zoo::event1_otter(){
    if (this->otter_count > 0 ){
        int rand_otter = rand()%this->otter_count;
        if (this->otter[rand_otter].get_age() <= 6 && this->otterbabies > 0){
            event1_otterbaby(rand_otter);
        }
        else if (this->otter[rand_otter].get_age() > 6 && this->otteradults > 0){
            event1_otteradult(rand_otter);
        }
        else if ((this->otter[rand_otter].get_age() <= 6 || this->otter[rand_otter].get_age() > 6) && (this->otteradults == 0 || this->otterbabies == 0)){
            cout << "Great News! All your animals escape this sickness month." << endl;
        }
    }
    else if (this->otter_count == 0){
        cout << "Good News. All your animals escape the sickness month." << endl;
    }
}

void Zoo::remove_sicksloth(int rand_sloth){
    Sloth* sloth_temp = new Sloth [this->sloth_count-1];
    int j = 0;
    for (int i = 0; i < this->sloth_count; i++) {
        if (i == rand_sloth) {
            continue;
        }
        sloth_temp[j] = this->sloth[i];
        j++;
    }

    if (this->sloth != NULL)
        delete [] this->sloth;

    this->sloth = sloth_temp;
}

//This function exceeds the limit 15 lines because of the outputs that will make the program display looks better and more understanding
void Zoo::event1_slothbaby(int rand_sloth){
    cout << "A baby sloth is sick. It will cost $2500 to cure." << endl;
    if (this->money < 2500){
        cout << "Unfortunately, you don't have enough money to cure the animal." << endl;
        cout << "The baby sloth died." << endl;
        remove_sicksloth(rand_sloth);
        this->sloth_count -= 1;
        this->slothbabies -= 1;
        this->total_animals -= 1;
    }
    else if (this->money >= 2500 && this->slothbabies > 0){
        cout << "\n===================================================================" << endl;
        cout << "$2500 will be deducted from my bank account." << endl;
        this->money -= 2500;
        cout << "Remaining Money : $" << this->money << endl;
        cout << "===================================================================" << endl << endl;
    }
    else if (this->slothbabies == 0){
        cout << "Good News. All your animals escape the sickness month." << endl;
    }
}

//This function exceeds the limit 15 lines because of the outputs that will make the program display looks better and more understanding
void Zoo::event1_slothadult(int rand_sloth){
    cout << "An adult sloth is sick. It will cost $1250 to cure." << endl;
    if (this->money < 1250){
        cout << "Unfortunately, you don't have enough money to cure the animal." << endl;
        cout << "One adult sloth died." << endl;
        remove_sicksloth(rand_sloth);
        this->sloth_count -= 1;
        this->slothadults -= 1;
        this->total_animals -= 1;
    }
    else if (this->money >= 1250 && this->slothadults > 0){
        cout << "$1250 will be deducted from my bank account." << endl;
        this->money -= 1250;
        cout << "Remaining Money : $" << this->money << endl;
    }
    else if (this->slothadults == 0){         
        cout << "Good News. All your animals escape the sickness month." << endl;
    }
}

void Zoo::event1_sloth(){
    if (this->sloth_count > 0 ){
        int rand_sloth = rand()%this->sloth_count;
        if (this->sloth[rand_sloth].get_age() <= 6 && this->slothbabies > 0){
            event1_slothbaby(rand_sloth);
        }
        else if (this->sloth[rand_sloth].get_age() > 6 && this->slothadults > 0){
            event1_slothadult(rand_sloth);
        }
        else if ((this->sloth[rand_sloth].get_age() <= 6 || this->sloth[rand_sloth].get_age() > 6) && (this->slothadults == 0 || this->slothbabies == 0)){
            cout << "Great News! All your animals escape this sickness month." << endl;
        }
    }
    else if (this->sloth_count == 0){
        cout << "Good News. All your animals escape the sickness month." << endl;
    }
}

void Zoo::normal_chance(int animal){
    if (animal == 1){
        event1_monkey();
    }
    else if (animal == 2){
        event1_otter();
    }
    else if (animal == 3){
        event1_sloth();
    }
}

void Zoo::double_chance(int animal){
    int chance = rand()%2 +1;
    if (chance == 1){
        if (animal == 1){
            event1_monkey();
        }
        else if (animal == 2){
            event1_otter();
        }
        else if (animal == 3){
            event1_sloth();
        }
    }
    else{
        cout << "Good News! Your animals have escaped the sickness month." << endl;
    }
}

void Zoo::event1_sick(){
    cout << "Bad News For the month! A random animal will get sick in the zoo!" << endl;
    int animal = rand()% 3 + 1;
    if (this->food_type == 1)
        double_chance(animal);
    else if (this->food_type == 2)
        normal_chance(animal);
    else if (this->food_type == 3)
        normal_chance(animal);
}

void Zoo::add_monkeybaby(){
    Monkey* monkeybaby_temp = new Monkey[this->monkey_count];

    for (int i = 0 ; i < this->monkey_count - 1; ++i)
        monkeybaby_temp[i] = this->monkey[i];

    for (int i = 1; i < 2 ; ++i)
        monkeybaby_temp[this->monkey_count - i].set_age(0);
    
    if (this->monkey != NULL)
        delete [] this->monkey;
    
    this->monkey = monkeybaby_temp;
}

void Zoo::add_otterbaby(){
    Sea_Otter* otter_temp = new Sea_Otter[this->otter_count];

    for (int i = 0 ; i < this->otter_count - 1; ++i)
        otter_temp[i] = this->otter[i];

    for (int i = 1 ; i < 2 ; ++i)
        otter_temp[this->otter_count - i].set_age(0);
    
    if (this->otter != NULL)
        delete [] this->otter;
    
    this->otter = otter_temp;
}

void Zoo::add_slothbaby(){
    Sloth* sloth_temp = new Sloth[this->sloth_count];

    for (int i = 0 ; i < this->sloth_count - 1; ++i)
        sloth_temp[i] = this->sloth[i];

    for (int i = 1 ; i < 2; ++i)
        sloth_temp[this->sloth_count - i].set_age(0);
    
    if (this->sloth != NULL)
        delete [] this->sloth;
    
    this->sloth = sloth_temp;
}

void Zoo::event2_birth_rand_inside(int animal){
    if (animal == 1){
        this->monkey_count += 1;
        this->total_animals += 1;
        add_monkeybaby();
        this->monkeybabies += 1;
    }
    else if (animal == 2){
        this->otter_count += 1;
        this->total_animals += 1;
        add_otterbaby();
        this->otterbabies += 1;
    }
    else if (animal == 3){
        this->sloth_count += 1;
        this->total_animals += 1;
        add_slothbaby();
        this->slothbabies += 1;
    }
}

void Zoo::event2_birth_rand(int animal){
    if (animal == 1 && this->monkeyadults > 0)
        event2_birth_rand_inside(animal);

    else if (animal == 1 && this->monkeyadults == 0) 
        cout << "Unfortunately! You don't have the chosen adult animal to give birth." << endl;

    else if (animal == 2 && this->otteradults > 0)
        event2_birth_rand_inside(animal);

    else if (animal == 2 && this->otteradults == 0)
        cout << "Unfortunately! You don't have the chosen adult animal to give birth." << endl;

    else if (animal == 3 && this->slothadults > 0)
        event2_birth_rand_inside(animal);

    else if (animal == 3 && this->slothadults == 0)
        cout << "Unfortunately! You don't have the chosen adult animal to give birth." << endl;
}

void Zoo::event2_birth(){
    if (this->total_animals > 0){
        cout << "\nCongratulation! A random adult animal will be chosen to give birth." << endl;
        int animal = rand()%3 + 1;
        event2_birth_rand(animal);
    }
    else if (this->total_animals == 0){
        cout << "\nCongratulation! A random adult animal will be chosen to give birth." << endl;
        cout << "Unfortunately, you don't have animal in your zoo." << endl;
    }
}

void Zoo::event3_food(){
    this->base_cost = 2* this->base_cost;
}

void Zoo::event3_boom(){
    cout << "Congratulation! There is a BOOM in the ZOO!" << endl;
    double babyrevenue = (this->monkeybabies * (4* this->attendance)) + (this->otterbabies * (0.25* this->attendance)) + (this->slothbabies * (0.25 * this->attendance));
    double adultrevenue = (this->monkeyadults * (2 * this->attendance)) + (this->otteradults * (0.5 * this->attendance)) + (this->slothadults * (0.5 * this->attendance)); 
    double total_revenue = babyrevenue + adultrevenue;
    this->money += total_revenue;
    cout << "\n===================================================================" << endl;
    cout << "Addition attendance : " << this->attendance << endl;
    cout << "Addition Revenue from BOOM : $" << total_revenue << endl;
    cout << "Month " << this->month << " Total Money : $" << this->money << endl;
    cout << "===================================================================" << endl << endl;
    event3_food();
}

void Zoo::half_chance(int event1){
    if (event1 == 1 && this->month > 1) event1_sick();
    else if (event1 == 1 && this->month == 1) {}

    else if (event1 == 2 && this->month > 1) event2_birth();
    else if (event1 == 2 && this->month == 1) {}

    else if (event1 == 3 && this->month > 1) event3_boom();
    else if (event1 == 3 && this->month == 1) {}

    else if (event1 == 4 && this->month > 1) cout << "No special event occur in this month." << endl;
    else if (event1 == 4 && this->month == 1) {}

    else if (event1 == 5 && this->month > 1) event1_sick();
    else if (event1 == 5 && this->month == 1) {}
}

void Zoo::special_eventfunctions(int event2){
    if (event2 == 1 && this->month > 1) event1_sick();
    else if (event2 == 1 && this->month == 1) {}

    else if (event2 == 2 && this->month > 1) event2_birth();
    else if (event2 == 2 && this->month == 1) {}

    else if (event2 == 3 && this->month > 1) event3_boom();
    else if (event2 == 3 && this->month == 1) {}

    else if (event2 == 4 && this->month > 1) cout << "No special event occur in this month." << endl;
    else if (event2 == 4 && this->month == 1) {}
}

void Zoo::special_event(){
    srand(time(NULL));
    if (this->food_type == 3){
        int event1 = rand() % 4 + 1;
        half_chance(event1);
    }
        
    else{
        int event2 = rand() % 4 + 1;
        special_eventfunctions(event2);
    }
}

void Zoo::quit(){
    int x;
    cout << "Would you like to keep on playing?" << endl;
    cout << "1) Yes, I want to keep playing." << endl;
    cout << "2) No, let me exit the game." << endl;
    cin  >> x;
    if (x == 1){
        cout << "\n=================================================================================" << endl;
        cout << "=================================================================================" << endl << endl;
    }
    
    else if (x == 2)
        exit(1);

    else if (x < 1 || x > 2){
        cout << "Invalid input. Please try again." << endl;
        quit();
    }
}

void Zoo::winning(){
    if (this->money > 100000){
        cout << "\n=================================================================================" << endl;
        cout << "Total Money : " << this->money << endl;
        cout << "Congratulation!Your total bank amount has exceeded $100000" << endl;
        cout << " |o| |o| ...You have won the game ... |o| |o|" << endl;
        cout << "=================================================================================" << endl << endl;
        quit();
    }
    else {}
}

void Zoo::status(){
    cout << "\nZOO STATUS" << endl;
    cout << "===================================================================" << endl;
    cout << "Month : " << this->month << endl;
    cout << "Money : $" << this->money << endl << endl;
    cout << "Animals You own : " << this->total_animals << endl << endl;
    cout << "Total Monkey : " << this->monkey_count << endl;
    cout << this->monkeybabies << " baby/s, " << this->monkeyadults << " adult/s" << endl << endl;
    cout << "Total Sea Otter : " << this->otter_count << endl;
    cout << this->otterbabies << " baby/s, " << this->otteradults << " adult/s" << endl << endl;
    cout << "Total Sloth : " << this->sloth_count << endl;
    cout << this->slothbabies << " baby/s, " << this->slothadults << " adult/s" << endl;
    cout << "===================================================================" << endl << endl;
}

void Zoo::game_set_up(){
    while(this->money >= 0){
        status();
        winning();
        revenue();
        food_quality();
        special_event();
        function1();
        function2();
        food_cost();
        void increase_monkey_age();
        void increase_otter_age();
        void increase_sloth_age();
        this->month++;
        if (this->money < 0 )
            exit(1);
        quit();
    }
}