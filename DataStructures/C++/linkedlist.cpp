#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
};

int printingValues(Node* n){
    while (n != NULL){
        cout<<n->value<<" ";
        n = n->next;
    }
    return 0; 
}

int main(){
    Node* first = NULL;
    Node* second = NULL;
    Node* tail = NULL;

    //we declared above: pointers which point to nothing(hence NULL)

    first = new Node();
    second = new Node();
    tail = new Node();

    //we are creating objects in the class LinkedList

    first->value = 3;
    first->next = second;

    //we declared first object with it's value equal to 3 and pointer pointing to the second

    second->value = 5;
    second->next = tail;

    //we declared second object with it's value equal to 5 and pointer pointing the third

    tail->value = 7;
    tail->next = NULL;

    // we declared third object with it's value equal to 7 and pointer still pointing to NULL

    printingValues(first);
}