Name : Tun Aung Thaung
ONID : thaungt@oregonstate.edu
Section : CS_162_001_U2020
Assignment 4, due 8/14/2020

Description :

This program create a linked list of node classes. In this program, you can modify the linked list by adding a node class at the back of list, at the start of list or any
position that is avaiable in the list. This program also provide a sorted linked list in ascending or descending order.
There is 5 tests in the program.
Test 1   : It stores the length of the linked list
Test 2.1 : It adds different values of node classes at the beginnging of the linked list
Test 2.2 : It adds different values of node classes at the end of linked list
Test 2.3 : It inserts different values of node classes in 'n' position of linked list
Test 3.1 : It sorts the linked list in ascending order
Test 3.2 : It sorts the linked list in descending order
Test 4   : It outputs the number of prime in the linked list
Test 5   : It delete the memory of the node classes and reset the length of linked list to 0

Instructions :

1) To compile the program : Easily type make and the makefile which includes all the program files will compile.
2) To run the program : tpye "./main" in the command line
3) When the program starts, it will run test 1 then test 2.1 and according until test 5.
4) After each test, you will see "Press <enter> to continue..."
5) You will have to press enter after each test to continue to the next test.
6) Program will quit after all tests are completed

Limitations :

The program have no step back and once started, it runs until the program quits.

Extra Credits :
~

Complexity Analysis : 

sort_ascending()

The function starts with if statement and inside there is two for loops. So, the runtime complexity for if statement is O(1) and the two for loops have O(n), O(n) runtime complexity 
accordingly. Moreover, the function has recursive statement which results the runtime complexity for sort_ascending() with O(n^2 log (n^2)).

sort_descending()

The function starts with if statement and inside there is two for loops. So, the runtime complexity for if statement is O(1) and the two for loops have O(n), O(n) runtime complexity 
accordingly. Moreover, the function has recursive statement which results the runtime complexity for sort_ascending() with O(n^2 log (n^2)).

count_prime()

The function includes only one return statement which makes its runtime complexity O(1).
