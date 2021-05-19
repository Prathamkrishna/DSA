#include<bits/stdc++.h>
using namespace std;

int pushingElement(int x);

int arr1[5];
int i = 0;

int main(){
    pushingElement(5);
    pushingElement(4);
    pushingElement(3);
    pushingElement(2);
    return 0;
}

int pushingElement(int x){
    arr1[i] = x;
    i++;

    for(int j = 0; j < 5; j++){
        cout<<arr1[j]<<endl;
    }
    return 0;
}
