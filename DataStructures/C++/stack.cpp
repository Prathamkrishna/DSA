#include<bits/stdc++.h>
using namespace std;

int pushingElement(int x);
int popElement();

vector<int>arr1(5);
int i = 0;
int x = 4;

int main(){
    pushingElement(5);
    pushingElement(4);
    pushingElement(3);
    pushingElement(2);
    for(int j = 0; j < 5; j++){
        cout<<arr1[j]<<endl;
    }
    popElement();
    popElement();
    return 0;
}

int pushingElement(int x){
    if(i > 4){
        cout<<"stack overflow"<<endl;
    }
    else{
        arr1[i] = x;
        i++;
    }
    return 0;
}

int popElement(){
    if(x < 0){
        cout<<"stack underflow"<<endl;
    }
    else{
        vector<int>arr1(x);
        cout<<"the number of elements in this array are: "<<x<<endl;
        x--;
    }
    for(int j = 0; j < x; j++){
        cout<<arr1[j];
    }
    return 0;
}