#include "node.h"
#include <iostream>

using namespace std;

Node:: Node(){
    this->val = 0;
    this->next = NULL;
}

Node:: Node(int new_val){
    this->val = new_val;
    this->next = NULL;
}