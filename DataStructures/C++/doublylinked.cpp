// use diff class for node and linkedlist

#include<bits/stdc++.h>
using namespace std;


// double linked stuff = dd

class Node{
    public: 
    int value;
    Node *next;
    //dd
    Node *prev;

    Node(int value){
        this->value = value;
        next = nullptr;
        //dd
        prev = nullptr;
    }
};

//explanatiion try: what we're doing here is creatung a new node and pointing to next node, i named every node so it was easier to understand ki where it is pointing to

class LinkedList{
    Node *head;
    Node *tail;

    public:
    int size;

    LinkedList(){
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    void pushEnd(int ele){
        Node *n = new Node(ele);
        if(tail == nullptr){
            head = tail = n;
            size = 1;
            return;
        }
        else{
            tail->next = n;
            n->prev = tail;
            tail = n;
            size++;
        }
    }
    void pushFront(int ele){
        Node *n = new Node(ele);
        if(head == nullptr){
            tail = head = n;
            size = 1;
            return;
        }
        else{
            n->next = head;
            head->prev = n;
            head = n;
            size++;
        }
    }
    void popFront(){
        if(head == nullptr){
            cout<<"List underflow"<<endl;
            return;
        }
        if(head == tail){
            head = tail = nullptr;
            size = 0;
            return;
        }
        head = head->next;
        head->prev = nullptr;
        size--;
    }
    void popEnd(){
        if(tail == nullptr){
            cout<<"List underflow"<<endl;
            return;
        }
        if(head == tail){
            head = tail = nullptr;
            size = 0;
            return;
        }

        tail = tail->prev;
        tail->next = nullptr;

        size--;
    }
    int viewFront(){
        if(head == nullptr){
            cout<<"List empty"<<endl;
            return -1;
        }
        return head->value;
    }
    void displayLst(){
        Node *p = head;

        while(p!=nullptr){
            cout<<p->value<<" ";
            p = p->next;
        }

        cout<<endl;
    }

};

class Stack{
    LinkedList list1;
    
    void PushEnd(int x){
        list1.pushEnd(x);
    }
    void PushFront(int x){
        list1.pushFront(x);
    }
    //...

};

int main(){
    LinkedList list;
    list.pushEnd(10);
    list.pushEnd(20);
    list.popEnd();
    list.displayLst();
    return 0;
}
