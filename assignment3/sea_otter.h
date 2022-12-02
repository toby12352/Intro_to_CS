#ifndef SEA_OTTER_H
#define SEA_OTTER_H

#include <iostream>
#include "animal.h"

using namespace std;

class Sea_Otter : public Animal{
private:
    int buy_price;
    int sell_price;
public:
/*********************************************************************
** Function: Sea_Otter
** Description: initializing members of Sea_Otter class
** Parameters: ~
** Pre-Conditions: member class with no value
** Post-Conditions: member class with values
*********************************************************************/ 
    Sea_Otter();

/*********************************************************************
** Function: get_buy_price
** Description: accessing the buy_price member of class
** Parameters: ~
** Pre-Conditions: not have accessed the buy_price member class
** Post-Conditions: accessed the buy_price member class
*********************************************************************/ 
    int get_buy_price() const;
/*********************************************************************
** Function: get_sell_price
** Description: accessing the sell_price member of class
** Parameters: ~
** Pre-Conditions: not have accessed the sell_price member class
** Post-Conditions: accessed the sell_price member class
*********************************************************************/ 
    int get_sell_price() const;

/*********************************************************************
** Function: set_buy_price
** Description: Setting the member of class to new value
** Parameters: int
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_buy_price(int);
/*********************************************************************
** Function: set_sell_price
** Description: Setting the member of class to new value
** Parameters: int
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_sell_price(int);
};


#endif