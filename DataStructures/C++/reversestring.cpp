#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<string> givenstring;
    stack<string> reversedstring;

    givenstring.push("a");
    givenstring.push("b");
    givenstring.push("c");
    givenstring.push("d");
    givenstring.push("e");

    while(!givenstring.empty()){
        string i = givenstring.top();
        reversedstring.push(i);
        givenstring.pop();
    }

    while(!reversedstring.empty()){
        cout<<reversedstring.top();
        reversedstring.pop();
    }
}