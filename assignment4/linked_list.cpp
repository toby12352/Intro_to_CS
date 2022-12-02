#include <iostream>
#include "linked_list.h"
#include "node.h"

using namespace std;

Linked_List:: Linked_List(){
    this->length = 0;
    this->prime_count = 0; 
    this->head = NULL;
}

int Linked_List:: get_length(){
    return this->length;
}

int Linked_List:: get_prime_count() const{
    return this->prime_count;
}

bool Linked_List:: prime(int n){
    int m;
    m = n/2;
    for (int i = 2; i <=m ; i++){
        if (n% i == 0)
            return false;
    }
    return true;
}

void Linked_List:: print(){
    Node* current;
    current = head;

    while (current != NULL){
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

void Linked_List:: clear(){
    Node* current;
    current = head;
    Node* temp = NULL;
    while (current != NULL){
        temp = current->next;
        delete current;
        current = temp;
    }
    head = NULL;
    this->length = 0;
    this->prime_count = 0;
}

void Linked_List:: push_front(int x){
    Node* current = new Node;
    current->val = x;
    
    if (this->head != NULL)
        current->next = this->head;
    
    this->head = current;
    this->length += 1;
    if ( x > 1){
        if (prime(x)){
            this->prime_count += 1;
        }
    }
}

void Linked_List:: push_back(int x){
    Node *temp = new Node;
    temp->val = x;

    if (this->head == NULL) this->head = temp;

    else {
        Node *current = this->head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = temp;
    }
    this->length++;

    if ( x > 1){
        if (prime(x)){
            this->prime_count += 1;
        }
    }
}

//This function exceeds the 15 lines limit due to the new declaration of Linked_List and nodes and also because of the inclusion of prime.
void Linked_List:: insert(int val, unsigned int index){
    Node* new_node = new Node;
    new_node->val = val;
    
    Node* temp = this->head;

    if (index == 0)
        push_front(val);

    else if (index > this->length){
    }
    else if (index == this->length) 
        push_back(val);

    else{
        for (int i = 0 ; i < index-1 ; ++i){
            temp = temp->next;
        }
    
        new_node->next = temp->next;
        temp->next = new_node;
        this->length += 1;
        if ( val > 1){
            if (prime(val)){
                this->prime_count += 1;
            }
        }
    }
}

//This function exceeds the 15 lines limit due to the new declaration of Linked_List and nodes.
void Linked_List::divide_merge1(Linked_List &divide){
    if (divide.get_length() > 1){
        int middle = divide.get_length()/2;
        Linked_List left, right;
        Node* new_divide = divide.head;

        for (int i = 0 ; i < middle; ++i){
            left.push_back(new_divide->val);
            new_divide = new_divide->next;
        }

        for (int i = middle; i < divide.get_length(); ++i){
            right.push_back(new_divide->val);
            new_divide = new_divide->next;
        }

        divide_merge1 (left);
        divide_merge1 (right);

        divide = ascendingmerge(left, right);

        left.clear();
        right.clear();
    }
}

//This function exceeds the 15 lines limit due to the new declaration of Linked_List and nodes.
Linked_List Linked_List::ascendingmerge(Linked_List &left, Linked_List& right){
    Node* new_left = left.head;
    Node* new_right = right.head;
    Linked_List sorted_array;

    while (new_left != NULL && new_right != NULL){
        if (new_left->val < new_right->val){
            sorted_array.push_back(new_left->val);
            new_left = new_left->next;
        }
        else{
            sorted_array.push_back(new_right->val);
            new_right = new_right->next;
        }
    }

    while (new_left != NULL){
        sorted_array.push_back(new_left->val);
        new_left = new_left->next;
    }
    while (new_right != NULL){
        sorted_array.push_back(new_right->val);
        new_right = new_right->next;
    }

    clear();
    return sorted_array;
}

void Linked_List::sort_ascending(){
    divide_merge1(*this);
}

//This function exceeds the 15 lines limit due to the new declaration of Linked_List and nodes.
void Linked_List::divide_merge2(Linked_List &divide){
    if (divide.get_length() > 1){
        int middle = divide.get_length()/2;
        Linked_List left, right;
        Node* new_divide = divide.head;

        for (int i = 0 ; i < middle; ++i){
            left.push_back(new_divide->val);
            new_divide = new_divide->next;
        }

        for (int i = middle; i < divide.get_length(); ++i){
            right.push_back(new_divide->val);
            new_divide = new_divide->next;
        }

        divide_merge2 (left);
        divide_merge2 (right);

        divide = descendingmerge(left, right);

        left.clear();
        right.clear();
    }
}

//This function exceeds the 15 lines limit due to the new declaration of Linked_List and nodes.
Linked_List Linked_List::descendingmerge(Linked_List &left, Linked_List& right){
    Node* new_left = left.head;
    Node* new_right = right.head;
    Linked_List sorted_array;

    while (new_left != NULL && new_right != NULL){
        if (new_left->val > new_right->val){
            sorted_array.push_back(new_left->val);
            new_left = new_left->next;
        }
        else{
            sorted_array.push_back(new_right->val);
            new_right = new_right->next;
        }
    }

    while (new_left != NULL){
        sorted_array.push_back(new_left->val);
        new_left = new_left->next;
    }
    while (new_right != NULL){
        sorted_array.push_back(new_right->val);
        new_right = new_right->next;
    }

    clear();
    return sorted_array;
}

void Linked_List:: sort_descending(){
    divide_merge2(*this);
}

int count_prime(const Linked_List& l){
    return l.get_prime_count();
}