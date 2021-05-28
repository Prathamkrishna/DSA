#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> givenstring;
    stack<string> reversedstring;

    givenstring.push('a');
    givenstring.push('b');
    givenstring.push('c');
    givenstring.push('d');
    givenstring.push('e');

    while(!givenstring.empty()){
        cout<<givenstring.top();
        givenstring.pop();
    }

    cout<<""<<endl;

    while(!givenstring.empty()){
        char i = givenstring.top();
        reversedstring.push("i");
        givenstring.pop();
    }

    while(!reversedstring.empty()){
        cout<<reversedstring.top();
        reversedstring.pop();
    }
}