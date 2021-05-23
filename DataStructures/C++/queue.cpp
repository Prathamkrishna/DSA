#include<bits/stdc++.h>
using namespace std;

int size = 0;

class Queue{
    public:
    int front, rear;
    vector<int>arr1 = vector<int>(20);
    Queue* next;

    int pushingElements(int y){
        arr1[size] = y;
        rear = y;
        size++;
        printing();
        return 0;
    }
    void printing(){
        for(int i = 0; i < size; i++){
            cout<<arr1[i];
        }
        cout<<" "<<endl;
        cout<<size;
    }
};

int main(){
    Queue* first = NULL;
    Queue* second = NULL;
    Queue* third = NULL;

    first = new Queue();
    second = new Queue();
    third = new Queue();

    first->pushingElements(3);
    first->next = second;
    
    second->pushingElements(4);
    second->next = third;

    third->pushingElements(5);
    third->next = NULL;

    return 0;
}