#ifndef ANIMAL_H
#define ANIMAL_H
   
#include <iostream>
using namespace std;

class Animal{
protected:
    int age;
    int price;
    float food_cost;
    
public:
/*********************************************************************
** Function: Animal
** Description: initializing members of Animal class
** Parameters: ~
** Pre-Conditions: member class with no value
** Post-Conditions: member class with values
*********************************************************************/ 
    Animal();

/*********************************************************************
** Function: get_age
** Description: accessing the age member of class
** Parameters: ~
** Pre-Conditions: not have accessed the age member class
** Post-Conditions: accessed the age member class
*********************************************************************/ 
    int get_age() const;
/*********************************************************************
** Function: get_price
** Description: accessing the price member of class
** Parameters: ~
** Pre-Conditions: not have accessed the price member class
** Post-Conditions: accessed the price member class
*********************************************************************/ 
    int get_price() const;
/*********************************************************************
** Function: get_food_cost
** Description: accessing the food cost member of class
** Parameters: ~
** Pre-Conditions: not have accessed the food cost member class
** Post-Conditions: accessed the food cost member class
*********************************************************************/ 
    float get_food_cost() const;
 
 /*********************************************************************
** Function: set_age
** Description: Setting the member of class to new value
** Parameters: int
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_age(int);
/*********************************************************************
** Function: set_price
** Description: Setting the member of class to new value
** Parameters: int
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_price(int);
/*********************************************************************
** Function: set_food_cost
** Description: Setting the member of class to new value
** Parameters: float
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_food_cost(float);

/*********************************************************************
** Function: increase_age
** Description: Increase age of animals
** Parameters: 
** Pre-Conditions: Animals don't age
** Post-Conditions: Animals age
*********************************************************************/ 
    void increase_age();
    

};

#endif