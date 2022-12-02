/********************************************************************************
** Program : zoo_tycoon.cpp
** Author: Tun Aung Thaung
** Date: 8/1/2020
** Description: Starting a zoo by buying/selling animals until lose
** Input: zoo class, animal class, monkey class, sea otter class, sloth class
** Output: Zoo with animals and money
********************************************************************************/

#include <iostream>
#include "zoo.h"
#include "animal.h"
#include "monkey.h"
#include "sea_otter.h"
#include "sloth.h"

using namespace std;

int main (int argc, char** argv){
    Zoo z;
    z.game_set_up();

    return 0;
}