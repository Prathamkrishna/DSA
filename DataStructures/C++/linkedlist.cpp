#include<bits/stdc++.h>
using namespace std;

class LinkedList{
    public:
    int value;
    LinkedList* next;
};

int printingValues(LinkedList* n){
    while (n != NULL){
        cout<<n->value<<" ";
        n = n->next;
    }
    return 0; 
}

int main(){
    LinkedList* first = NULL;
    LinkedList* second = NULL;
    LinkedList* third = NULL;

    //we declared above: pointers which point to nothing(hence NULL)

    first = new LinkedList();
    second = new LinkedList();
    third = new LinkedList();

    //we are creating objects in the class LinkedList

    first->value = 3;
    first->next = second;

    //we declared first object with it's value equal to 3 and pointer pointing to the second

    second->value = 5;
    second->next = third;

    //we declared second object with it's value equal to 5 and pointer pointing the third

    third->value = 7;
    third->next = NULL;

    // we declared third object with it's value equal to 7 and pointer still pointing to NULL

    printingValues(first);
}