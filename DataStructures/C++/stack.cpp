#include<bits/stdc++.h>
using namespace std;

int pushingElement(int x);

vector<int>arr1(5);
int i = 0;

int main(){
    pushingElement(5);
    pushingElement(4);
    pushingElement(3);
    pushingElement(2);
    for(int j = 0; j < 5; j++){
        cout<<arr1[j]<<endl;
    }
    return 0;
}

int pushingElement(int x){
    if(i > 4){
        cout<<"cannot be added"<<endl;
    }
    else{
        arr1[i] = x;
        i++;
    }
    return 0;
}
