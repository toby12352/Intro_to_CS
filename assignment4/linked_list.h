#ifndef LINKED_LIST
#define LINKED_LIST

#include "node.h"

class Linked_List {
private:
	unsigned int length;
	int prime_count;
	Node* head;
public:
/*********************************************************************
** Function: Linked_List
** Description: Constructor for Linked_List
** Parameters: ~
** Pre-Conditions: Member class with no value
** Post-Conditions: Member class with values
*********************************************************************/ 
	Linked_List();
/*********************************************************************
** Function: get_length
** Description: Accessor for length
** Parameters: ~
** Pre-Conditions: Not have accessed length member
** Post-Conditions: Have accessed length member
*********************************************************************/ 
	int get_length();
/*********************************************************************
** Function: get_prime_count
** Description: Accessor for prime_count
** Parameters: ~
** Pre-Conditions: Not have accessed prime_count member
** Post-Conditions: Have accessed prime_count member
*********************************************************************/ 
	int get_prime_count() const;
/*********************************************************************
** Function: prime
** Description: true if n is prime and false if not 
** Parameters: int n
** Pre-Conditions: No condition for prime numbers
** Post-Conditions: Setted condition for prime numbers
*********************************************************************/ 
	bool prime(int n);

/*********************************************************************
** Function: print
** Description: print the values of linked list
** Parameters:~
** Pre-Conditions: Not output
** Post-Conditions: Output displayed
*********************************************************************/ 
	void print();
/*********************************************************************
** Function: clear
** Description: Delete the linked list and reset length to 0
** Parameters: ~
** Pre-Conditions: have memory leaks and length values
** Post-Conditions: deleted the linked list and reset length to 0
*********************************************************************/ 
	void clear();

/*********************************************************************
** Function: push_front
** Description: Add class at the start of beginning
** Parameters: int
** Pre-Conditions: No function to add class at the start of beginning
** Post-Conditions: Function that provide the above added
*********************************************************************/    
	void push_front(int);
/*********************************************************************
** Function: push_back
** Description: Add class at the end of beginning
** Parameters: int
** Pre-Conditions: No function to add class at the end of beginning
** Post-Conditions: Function that provide the above added
*********************************************************************/  
	void push_back(int);
/*********************************************************************
** Function: insert
** Description: Add class at the nth position of beginning
** Parameters: int, unsigned int
** Pre-Conditions:No function to add class at the nth position of beginning
** Post-Conditions: Function that provide the above added
*********************************************************************/ 
	void insert(int val, unsigned int index);

/*********************************************************************
** Function: divide_merge1
** Description: Divide linked list, sort it and merge the linked list
** Parameters: Linked_List &
** Pre-Conditions: Not have divided, merged and sorted
** Post-Conditions: Have divided, merged and sorted
*********************************************************************/ 
	void divide_merge1(Linked_List &);
/*********************************************************************
** Function: ascendingmerge
** Description: Sort and merge the linked list in ascending order
** Parameters: Linked_List&, Linked_List&
** Pre-Conditions: Not have sorted and merged the linked list in ascending order
** Post-Conditions: Have sorted and merged the linked list in ascending order
*********************************************************************/ 
	Linked_List ascendingmerge(Linked_List &,Linked_List &);

/*********************************************************************
** Function: sort_ascending
** Description: Sort linked list in ascending order
** Parameters: ~
** Pre-Conditions: Not have sorted
** Post-Conditions: Have sorted
*********************************************************************/ 
	void sort_ascending();
/*********************************************************************
** Function: divide_merge2
** Description: Divide linked list, sort it and merge the linked list
** Parameters: Linked_List &
** Pre-Conditions: Not have divided, merged and sorted
** Post-Conditions: Have divided, merged and sorted
*********************************************************************/  
	void divide_merge2(Linked_List &);
/*********************************************************************
** Function: descendingmerge
** Description: Sort and merge the linked list in descending order
** Parameters: Linked_List&, Linked_List&
** Pre-Conditions: Not have sorted and merged the linked list in descending order
** Post-Conditions: Have sorted and merged the linked list in descending order
*********************************************************************/ 
	Linked_List descendingmerge(Linked_List &,Linked_List &);

/*********************************************************************
** Function: sort_descending
** Description: Sort linked list in descending order
** Parameters: ~
** Pre-Conditions: Not have sorted
** Post-Conditions: Have sorted
*********************************************************************/ 
	void sort_descending(); // sort the nodes in descending order

	// you can add extra member variables or functions as desired
};

/*********************************************************************
** Function: count_prime
** Description: Count and return the number of prime numbers within the list
** Parameters: const Linked_List &
** Pre-Conditions: Not have counted and returned the number of prime numbers within the list
** Post-Conditions: Have counted and returned the number of prime numbers within the list
*********************************************************************/ 
int count_prime(const Linked_List&);

#endif