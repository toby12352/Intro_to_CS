Name : Tun Aung Thaung
ONID : thaungt
Section : CS_162_001_U2020
Assignment 1, due 7/5/2020

Description

This program library stores the wizard and spellbook data from the text file and stored into the program. And then, if the user is student, death and poison spells will be hidden and if the user is headmaster or 
teacher, it will show all the spells in the library. The user can choose to sort the spellbooks depending on the number of pages or average success rate or the spell effects. The program will quit if the user
wrongly inputs login information three times in total.

Instructions : 

1) To compile the program : Easily type make and the makefile which includes all the program files will compile.
2) To run the program : type "./catalog_prog wizards.txt spellbooks.txt" in the command line
   When running program. The user needs to type exact words as above or the loading file will fail and the user won't be able to start the program.
3) Once you started the program, you will have to log into account. The user can only wrongly input the id and password three times, if the user put it wrong for three times, the program will automatically quit.
4) After logging in, you will see four options.
	1. Sort spells by number of pages
	2. Sort spells by effects
	3. Sort spells by average success rate
	4. Quit the program
5) User needs to input between 1 and 4 for the options or the program will keep asking to input again until it gets input 1-4.
6) After the chosen options, the user will see two more options which is 
	1. Print to screen
	2. Print to file
7) Same step as 5, the user needs to input 1 or 2 for the program to keep on running.
8) Print to screen function will show the sorted spells and spellbooks onto screen.
9) Print to file function will let you create a file with a name of your own choice and the program will output the sorted spells and spellbooks into that file.
10) Program will not end until the user choose the "Quit the program" option.

Limitation :

1) When inputting options, the user must not input alphabets, but only integers.


