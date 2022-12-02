Name : Tun Aung Thaung
ONID : thaungt
Section : CS_162_001_U2020
Assignment 3, due 8/1/2020

Description

This program provide a game called Zoo Tycoon. In this game, the player play as the owner of the game. The game starts with $50000 in owner's bank. One turn takes a month in game time and in each turn, the owner
have to buy and sell animals. There is mokey, sea otter and sloth in this game. There will also be a special event which occur once a month. There is total four special event: 1) a random animal will get sick,
all the animals will be safe if the owner doesn't have the chosen animal, 2) a random animal will give birth, the owner won't get the baby animal if he/she does not have the chosen animal, 3) a boom in zoo, this
event will doubles the attendance of the zoo and the base food cost of the animals.
The user will have the option to quit the game or keep playing at the end of each turn.

The player will win the game if his money goes above $100000. The game will ends if the money goes below $0 under any conditions.
For the food, there will be three types of food : premium, regular and cheap.
Premium food - It doubles the base food cost but it decrease the chance of animals getting sick in half.
Regular food - Regular food cost, it changes anything
Cheap food - It costs half the base food cost but it doubles the chance of animals getting sick.


Instructions : 

1) To compile the program : Easily type make and the makefile which includes all the program files will compile.
2) To run the program : type "./zoo_tycoon" in the command line
   When running program. The user needs to type exact words as above or the loading file will fail and the user won't be able to start the program.
3) Once the program starts, the user will have $50000 in bank.
4) After that, the revenue of the zoo will be added to bank based on the number of animals.
5) The program will ask if the user want to buy animals, if the user does not wish to buy, inputting the not buying option will skip the buying part
6) If the user wishes to buy, he/she can buy it by choosing the provided options in program. 
7) After the purchase, the animal the user purchase will be added to the zoo and will be shown in the status which appear everytime a turn starts.
8) The cost of animal will be subtracted from the bank account.
9) After buying options finish, the selling options will appear. The same method from buying options applies to selling options as well.
10) The only difference is that after you chose an animal to see, you have to choose if you want to sell baby or adult of the chosen animal, then by
    inputting the number of animal you want to sell, the animal will be removed from your zoo and money will be added back to your account.
12) After each turn ends, there will be food cost(base on number of animals) which subtracts money from the bank account.
13) The game will be over at anytime the user's money reaches less than 0.

14) After the first monnth, the special events will be held in every turn right before the buying part.

Limitations : 

1) When the user input for the options (for example . buying, selling, food types), the user must type only numbers with no space or the program will crash.
