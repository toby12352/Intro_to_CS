#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include "animal.h"
#include "monkey.h"
#include "sea_otter.h"
#include "sloth.h"
using namespace std;

class Zoo {
private:
    Monkey* monkey;
    Sea_Otter* otter;
    Sloth* sloth;
    int month;
    double money;
    int monkey_count;
    int otter_count;
    int sloth_count;
    int attendance;
    double base_cost;
    int food_type;

    int total_animals;

    int monkeybabies;
    int monkeyadults;

    int otterbabies;
    int otteradults;

    int slothbabies;
    int slothadults;

public:
/*********************************************************************
** Function: Zoo
** Description: initializing members of zoo class
** Parameters: ~
** Pre-Conditions: member class with no value
** Post-Conditions: member class with values
*********************************************************************/ 
    Zoo();

/*********************************************************************
** Function: get_month()const
** Description: accessing the month member class
** Parameters: ~
** Pre-Conditions: not have accessed the month member class
** Post-Conditions: accessed the month member class
*********************************************************************/ 
    int get_month() const;
/*********************************************************************
** Function: get_money()const
** Description: accessing themoney member class
** Parameters: ~
** Pre-Conditions: not have accessed the money member class
** Post-Conditions: accessed the money member class
*********************************************************************/ 
    int get_money() const;
/*********************************************************************
** Function: get_monkey_count()const
** Description: accessing the monkey_count member class
** Parameters: ~
** Pre-Conditions: not have accessed the monkey_count member class
** Post-Conditions: accessed the monkey_count member class
*********************************************************************/ 
    int get_monkey_count() const;
/*********************************************************************
** Function: get_otter_count()const
** Description: accessing the otter_count member class
** Parameters: ~
** Pre-Conditions: not have accessed the otter_count member class
** Post-Conditions: accessed the otter_count member class
*********************************************************************/ 
    int get_otter_count() const;
/*********************************************************************
** Function: get_sloth_count()const
** Description: accessing the sloth_count member class
** Parameters: ~
** Pre-Conditions: not have accessed the sloth_count member class
** Post-Conditions: accessed the sloth_count member class
*********************************************************************/ 
    int get_sloth_count() const;
/*********************************************************************
** Function: get_attendace()const
** Description: accessing the attendace member class
** Parameters: ~
** Pre-Conditions: not have accessed the attendace member class
** Post-Conditions: accessed the attendace member class
*********************************************************************/ 
    int get_attendance() const;
/*********************************************************************
** Function: get_base_cost()const
** Description: accessing the base_cost member class
** Parameters: ~
** Pre-Conditions: not have accessed the base_cost member class
** Post-Conditions: accessed the base_cost member class
*********************************************************************/ 
    int get_base_cost() const;
/*********************************************************************
** Function: get_food_type()const
** Description: accessing the food_type member class
** Parameters: ~
** Pre-Conditions: not have accessed the food_type member class
** Post-Conditions: accessed the food_type member class
*********************************************************************/ 
    int get_food_type() const;

/*********************************************************************
** Function: get_total_animals()const
** Description: accessing the total_animals member class
** Parameters: ~
** Pre-Conditions: not have accessed the total_animals member class
** Post-Conditions: accessed the total_animals member class
*********************************************************************/ 
    int get_total_animals() const;

/*********************************************************************
** Function: get_monkeybabies()const
** Description: accessing the monkeybabies member class
** Parameters: ~
** Pre-Conditions: not have accessed the monkeybabies member class
** Post-Conditions: accessed the monkeybabies member class
*********************************************************************/ 
    int get_monkeybabies() const;
/*********************************************************************
** Function: get_monkeyadults()const
** Description: accessing the monkeyadults member class
** Parameters: ~
** Pre-Conditions: not have accessed the monkeyadults member class
** Post-Conditions: accessed the monkeyadults member class
*********************************************************************/ 
    int get_monkeyadults() const;

/*********************************************************************
** Function: get_otterbabies()const
** Description: accessing the otterbabies member class
** Parameters: ~
** Pre-Conditions: not have accessed the otterbabies member class
** Post-Conditions: accessed the otterbabies member class
*********************************************************************/ 
    int get_otterbabies() const;
/*********************************************************************
** Function: get_otteradults()const
** Description: accessing the otteradults member class
** Parameters: ~
** Pre-Conditions: not have accessed the otteradults member class
** Post-Conditions: accessed the otteradults member class
*********************************************************************/ 
    int get_otteradults() const;

/*********************************************************************
** Function: get_slothbabies()const
** Description: accessing the slothbabies member class
** Parameters: ~
** Pre-Conditions: not have accessed the slothbabies member class
** Post-Conditions: accessed the slothbabies member class
*********************************************************************/ 
    int get_slothbabies() const;
/*********************************************************************
** Function: get_slothbabies()const
** Description: accessing the slothbabies member class
** Parameters: ~
** Pre-Conditions: not have accessed the slothbabies member class
** Post-Conditions: accessed the slothbabies member class
*********************************************************************/ 
    int get_slothadults() const;


/*********************************************************************
** Function: set_month
** Description: Setting the member of class to new value
** Parameters: int new_month
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_month(int);
/*********************************************************************
** Function: set_money
** Description: Setting the member of class to new value
** Parameters: double
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_money(double);
/*********************************************************************
** Function: set_monkey_count
** Description: Setting the member of class to new value
** Parameters: int new_monkey_count
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_monkey_count(int);
/*********************************************************************
** Function: set_otter_count
** Description: Setting the member of class to new value
** Parameters: int new_otter_count
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_otter_count(int);
/*********************************************************************
** Function: set_sloth_count
** Description: Setting the member of class to new value
** Parameters: int new_sloth_count
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_sloth_count(int);
/*********************************************************************
** Function: set_attendance
** Description: Setting the member of class to new value
** Parameters: int new_attendance
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_attendance(int);
/*********************************************************************
** Function: set_base_cost
** Description: Setting the member of class to new value
** Parameters: double
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_base_cost(double);
/*********************************************************************
** Function: set_food_type
** Description: Setting the member of class to new value
** Parameters: int new_food_type
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_food_type(int);

/*********************************************************************
** Function: set_total_animals
** Description: Setting the member of class to new value
** Parameters: int new_total_animals
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_total_animals(int);

/*********************************************************************
** Function: set_monkeybabies
** Description: Setting the member of class to new value
** Parameters: int new_monkeybabies
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_monkeybabies(int);
/*********************************************************************
** Function: set_monkeyadults
** Description: Setting the member of class to new value
** Parameters: int new_monkeyadults
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/     
    void set_monkeyadults(int);
 
/*********************************************************************
** Function: set_otterbabies
** Description: Setting the member of class to new value
** Parameters: int new_otterbabies
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_otterbabies(int);

/*********************************************************************
** Function: set_otteradults
** Description: Setting the member of class to new value
** Parameters: int new_otteradults
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_otteradults(int);

/*********************************************************************
** Function: set_slothbabies
** Description: Setting the member of class to new value
** Parameters: int new_slothbabies
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/ 
    void set_slothbabies(int);

/*********************************************************************
** Function: set_slothadults
** Description: Setting the member of class to new value
** Parameters: int new_slothadults
** Pre-Conditions: Not have setted the member
** Post-Conditions: Setted the member
*********************************************************************/     
    void set_slothadults(int);

/*********************************************************************
** Function: sell_inside
** Description: sell input function
** Parameters: ~
** Pre-Conditions: No sell choice in function
** Post-Conditions: Sell choice in function included
*********************************************************************/ 
    void sell_inside();

/*********************************************************************
** Function: remove_monkey
** Description: Removing one monkey from array
** Parameters: ~
** Pre-Conditions: Original array
** Post-Conditions: Original array - 1
*********************************************************************/  
    void remove_monkey();
/*********************************************************************
** Function: sell_monkeyoptions
** Description: selling options
** Parameters: ~
** Pre-Conditions: No selling options
** Post-Conditions: selling options displayed
*********************************************************************/ 
    void sell_monkeyoptions();
/*********************************************************************
** Function: sell_monkey
** Description: Selling monkey
** Parameters: ~
** Pre-Conditions: Original array
** Post-Conditions: Original array - 1
*********************************************************************/ 
    void sell_monkey();

/*********************************************************************
** Function: remove_otter
** Description: Removing one otter from array
** Parameters: ~
** Pre-Conditions: Original array
** Post-Conditions: Original array - 1
*********************************************************************/  
    void remove_otter();
/*********************************************************************
** Function: sell_otteroptions
** Description: selling options
** Parameters: ~
** Pre-Conditions: No selling options
** Post-Conditions: selling options displayed
*********************************************************************/ 
    void sell_otteroptions();
/*********************************************************************
** Function: sell_otter
** Description: Selling otter
** Parameters: ~
** Pre-Conditions: Original array
** Post-Conditions: Original array - 1
*********************************************************************/ 
    void sell_otter();

/*********************************************************************
** Function: remove_sloth
** Description: Removing one sloth from array
** Parameters: ~
** Pre-Conditions: Original array
** Post-Conditions: Original array - 1
*********************************************************************/  
    void remove_sloth();
/*********************************************************************
** Function: sell_slothoptions
** Description: selling options
** Parameters: ~
** Pre-Conditions: No selling options
** Post-Conditions: selling options displayed
*********************************************************************/ 
    void sell_slothoptions();
/*********************************************************************
** Function: sell_sloth
** Description: Selling sloth
** Parameters: ~
** Pre-Conditions: Original array
** Post-Conditions: Original array - 1
*********************************************************************/ 
    void sell_sloth();


/*********************************************************************
** Function: function2_choices
** Description: Choices for selling options
** Parameters: int
** Pre-Conditions: no function2 choices
** Post-Conditions: displayed function2 choices
*********************************************************************/ 
    void function2_choices(int);
/*********************************************************************
** Function: function2
** Description: selling function
** Parameters: ~
** Pre-Conditions: no function2
** Post-Conditions: function2 displayed
*********************************************************************/ 
    void function2();


/*********************************************************************
** Function: increase_monkey_age
** Description: Increase monkey age
** Parameters: ~
** Pre-Conditions: monkey age not increase
** Post-Conditions: monkey age increased
*********************************************************************/ 
    void increase_monkey_age();
/*********************************************************************
** Function: add_monkey 
** Description: add a monkey to array
** Parameters: int
** Pre-Conditions: monkey not added
** Post-Conditions: monkey added
*********************************************************************/ 
    void add_monkey(int);
/*********************************************************************
** Function: buy_monkey_inside
** Description: inside functions of buy_monkey
** Parameters: int, int
** Pre-Conditions: no functions in buy_monkey
** Post-Conditions: functions in buy_monkey
*********************************************************************/ 
    void buy_monkey_inside(int, int);
/*********************************************************************
** Function: buy_monkey
** Description: Buy monkey
** Parameters: ~
** Pre-Conditions: No buy monkey option
** Post-Conditions: buy monkey option displayed
*********************************************************************/ 
    void buy_monkey();

/*********************************************************************
** Function: increase_otter_age
** Description: Increase otter age
** Parameters: ~
** Pre-Conditions: otter age not increase
** Post-Conditions: otter age increased
*********************************************************************/ 
    void increase_otter_age();
/*********************************************************************
** Function: add_otter
** Description: add a otter to array
** Parameters: int
** Pre-Conditions: otter not added
** Post-Conditions: otter added
*********************************************************************/ 
    void add_otter(int);
/*********************************************************************
** Function: buy_otter_inside
** Description: inside functions of buy_otter
** Parameters: int, int
** Pre-Conditions: no functions in buy_otter
** Post-Conditions: functions in buy_otter
*********************************************************************/ 
    void buy_otter_inside(int, int);
/*********************************************************************
** Function: buy_otter
** Description: Buy otter
** Parameters: ~
** Pre-Conditions: No buy otter option
** Post-Conditions: buy otter option displayed
*********************************************************************/ 
    void buy_otter();

/*********************************************************************
** Function: increase_sloth_age
** Description: Increase sloth age
** Parameters: ~
** Pre-Conditions: sloth age not increase
** Post-Conditions: sloth age increased
*********************************************************************/ 
    void increase_sloth_age();
/*********************************************************************
** Function: add_sloth 
** Description: add a sloth to array
** Parameters: int
** Pre-Conditions: sloth not added
** Post-Conditions: sloth added
*********************************************************************/ 
    void add_sloth(int);
/*********************************************************************
** Function: buy_sloth_inside
** Description: inside functions of buy_sloth
** Parameters: int, int
** Pre-Conditions: no functions in buy_sloth
** Post-Conditions: functions in buy_sloth
*********************************************************************/ 
    void buy_sloth_inside(int, int);
/*********************************************************************
** Function: buy_sloth
** Description: Buy sloth
** Parameters: ~
** Pre-Conditions: No buy sloth option
** Post-Conditions: buy sloth option displayed
*********************************************************************/ 
    void buy_sloth();

/*********************************************************************
** Function: function1_choices
** Description: Choices for function1
** Parameters: int
** Pre-Conditions: No choices in function1
** Post-Conditions: Choices in function1 displayed
*********************************************************************/ 
    void function1_choices(int);
/*********************************************************************
** Function: function1
** Description: Buy animals functions
** Parameters: ~
** Pre-Conditions: No more buy function1
** Post-Conditions: function1 displayed
*********************************************************************/ 
    void function1();


/*********************************************************************
** Function: food_quality_display
** Description: Types of food display
** Parameters: ~
** Pre-Conditions: No food display
** Post-Conditions: Food displayed
*********************************************************************/ 
    void food_quality_display();
/*********************************************************************
** Function: Food quality
** Description: Food types of quality functions
** Parameters: ~
** Pre-Conditions: no food quality
** Post-Conditions: food quality displayed
*********************************************************************/ 
    void food_quality();
/*********************************************************************
** Function: food_cost
** Description: Food cost display
** Parameters: ~
** Pre-Conditions: No food cost
** Post-Conditions: food cost displayed
*********************************************************************/ 
    void food_cost();


/*********************************************************************
** Function: revenue
** Description: Find revenue and add to bank
** Parameters: ~
** Pre-Conditions: No revenue 
** Post-Conditions: Revenue added
*********************************************************************/
    void revenue();


/*********************************************************************
** Function: remove_sickmonkey
** Description: Remove sick monkey from array
** Parameters: int
** Pre-Conditions: Sick monkey not removed yet
** Post-Conditions: Sick monkey removed
*********************************************************************/
    void remove_sickmonkey(int);
/*********************************************************************
** Function: event1_monkeybaby
** Description: Monkey baby sick
** Parameters: int
** Pre-Conditions: Monkey baby not sick yet
** Post-Conditions: Monkey baby sick
*********************************************************************/
    void event1_monkeybaby(int);
/*********************************************************************
** Function: event1_monkeyadult
** Description: Monkey adult sick
** Parameters: int
** Pre-Conditions: Monkey adult not sick yet
** Post-Conditions: Monkey adult sick
*********************************************************************/
    void event1_monkeyadult(int);
/*********************************************************************
** Function: event1_monkey
** Description: Monkey sick in special event 1
** Parameters: ~
** Pre-Conditions: No monkey saved yet
** Post-Conditions: Monkey saved
*********************************************************************/
    void event1_monkey();

/*********************************************************************
** Function: remove_sickotter
** Description: Remove sick otter from array
** Parameters: int
** Pre-Conditions: Sick otter not removed yet
** Post-Conditions: Sick otter removed
*********************************************************************/
    void remove_sickotter(int);
/*********************************************************************
** Function: event1_otterbaby
** Description: otter baby sick
** Parameters: int
** Pre-Conditions: otter baby not sick yet
** Post-Conditions: otter baby sick
*********************************************************************/
    void event1_otterbaby(int);
/*********************************************************************
** Function: event1_otteradult
** Description: otter adult sick
** Parameters: int
** Pre-Conditions: otter adult not sick yet
** Post-Conditions: otter adult sick
*********************************************************************/
    void event1_otteradult(int);
/*********************************************************************
** Function: event1_otter
** Description: otter sick in special event 1
** Parameters: ~
** Pre-Conditions: No otter saved yet
** Post-Conditions: otter saved
*********************************************************************/
    void event1_otter();

/*********************************************************************
** Function: remove_sicksloth
** Description: Remove sick sloth from array
** Parameters: int
** Pre-Conditions: Sick sloth not removed yet
** Post-Conditions: Sick sloth removed
*********************************************************************/
    void remove_sicksloth(int);
/*********************************************************************
** Function: event1_slothbaby
** Description: sloth baby sick
** Parameters: int
** Pre-Conditions: sloth baby not sick yet
** Post-Conditions: sloth baby sick
*********************************************************************/
    void event1_slothbaby(int);
/*********************************************************************
** Function: event1_slothadult
** Description: sloth adult sick
** Parameters: int
** Pre-Conditions: sloth adult not sick yet
** Post-Conditions: sloth adult sick
*********************************************************************/
    void event1_slothadult(int);
/*********************************************************************
** Function: event1_sloth
** Description: Sloth sick in special event 1
** Parameters: ~
** Pre-Conditions: No sloth saved yet
** Post-Conditions: sloth saved
*********************************************************************/
    void event1_sloth();

/*********************************************************************
** Function: normal_chance
** Description: regular food makes animal sick
** Parameters: ~
** Pre-Conditions: no normal chance to get sick
** Post-Conditions: Normal chance to get sick
*********************************************************************/
    void normal_chance(int);
/*********************************************************************
** Function: double_chance
** Description: premium food make animals less sick
** Parameters: ~
** Pre-Conditions: no decrease in chance of sick
** Post-Conditions: decrease in chance of sick
*********************************************************************/
    void double_chance(int);
/*********************************************************************
** Function: event1_sick
** Description: Animals get sick in this event
** Parameters: ~
** Pre-Conditions: No animal get sick
** Post-Conditions: One animal gets sick
*********************************************************************/
    void event1_sick();

/*********************************************************************
** Function: add_monkeybaby
** Description: add a baby monkey
** Parameters: ~
** Pre-Conditions: Monkey not added
** Post-Conditions: Monkey added
*********************************************************************/
    void add_monkeybaby();
/*********************************************************************
** Function: add_otterbaby
** Description: add a baby otter
** Parameters: ~
** Pre-Conditions: otter not added
** Post-Conditions: otter added
*********************************************************************/
    void add_otterbaby();
/*********************************************************************
** Function: add_slothbaby
** Description: add a baby sloth
** Parameters: ~
** Pre-Conditions: sloth not added
** Post-Conditions: sloth added
*********************************************************************/
    void add_slothbaby();

/*********************************************************************
** Function: event2_birth_rand_inside
** Description: Functions for event2
** Parameters: int
** Pre-Conditions: No functions in event2
** Post-Conditions: Functions in event2 dispalyed
*********************************************************************/
    void event2_birth_rand_inside(int);
/*********************************************************************
** Function: event2_birth_rand
** Description: Functions for give birth event
** Parameters: int
** Pre-Conditions: Not chosen animal to give birth
** Post-Conditions: Chosen animal to give birth
*********************************************************************/
    void event2_birth_rand(int);
/*********************************************************************
** Function: event2_birth
** Description: Give birth function
** Parameters: ~
** Pre-Conditions: No giving birth
** Post-Conditions: One animal give birth
*********************************************************************/
    void event2_birth();

/*********************************************************************
** Function: event3_food
** Description: Food for event 3 boom
** Parameters: ~
** Pre-Conditions: No doubling food cost in event 3
** Post-Conditions: Doubling food cost included
*********************************************************************/
    void event3_food();
/*********************************************************************
** Function: event3_boom
** Description: Boom in special event
** Parameters: ~
** Pre-Conditions: no boom in special event
** Post-Conditions: Boom in special event included
*********************************************************************/
    void event3_boom();

/*********************************************************************
** Function: half_chance
** Description: Cheap Food effects
** Parameters: ~
** Pre-Conditions: No cheap food effects
** Post-Conditions: cheap food effcets included
*********************************************************************/
    void half_chance(int);
/*********************************************************************
** Function: special_eventfunctions
** Description: Special Eventfunctions
** Parameters: ~
** Pre-Conditions: no special eventfunctions
** Post-Conditions: special eventfunctions included in special functions
*********************************************************************/
    void special_eventfunctions(int);
/*********************************************************************
** Function: special_event
** Description: Special events
** Parameters: ~
** Pre-Conditions: no special events
** Post-Conditions: Special events included
*********************************************************************/
    void special_event();

/*********************************************************************
** Function: quit
** Description: Exit/keep playing the game
** Parameters: ~
** Pre-Conditions: no exit
** Post-Conditions: have an exit option
*********************************************************************/
    void quit();
/*********************************************************************
** Function: winning
** Description: Winning condition for game
** Parameters: ~
** Pre-Conditions: No winning condition
** Post-Conditions: Winning condition in game
*********************************************************************/
    void winning();
/*********************************************************************
** Function: status
** Description: Status of owner
** Parameters: ~
** Pre-Conditions: No status dispaly
** Post-Conditions: Status displayed
*********************************************************************/
    void status();
 
 /*********************************************************************
** Function: game_set_up
** Description: Game flow
** Parameters: ~
** Pre-Conditions: No game flow or setup
** Post-Conditions: Game flow display
*********************************************************************/
    void game_set_up();

};

#endif