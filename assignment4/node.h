#ifndef NODE_H
#define NODE_H

class Node{
public:
	int val;
	Node *next;
public:
/*********************************************************************
** Function: Node
** Description: Constructor for Node class
** Parameters: ~
** Pre-Conditions: Member class with no value
** Post-Conditions: Member class with values
*********************************************************************/
	Node();
/*********************************************************************
** Function: Node
** Description: Assigning member classes to new object
** Parameters: int new_val
** Pre-Conditions: Members not assigned to the new objects
** Post-Conditions: Members assigned to the new objects
*********************************************************************/ 
	Node(int new_val);
};

#endif