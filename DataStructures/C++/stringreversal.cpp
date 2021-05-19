#include<bits/stdc++.h>
using namespace std;

//program to reverse a string using stacks

class reverseString{
    public:
    vector<char>arr1 = vector<char>(5);
    vector<char>arr2 = vector<char>(5);

    void inputting(){
        cout<<"enter characters of string"<<endl;
        for(int i = 0; i < 5; i++){
            char y;
            cin>>y;
            arr1[i] = y;
        }
        cout<<"the string you have entered is: "<<endl;
        for(int i = 0; i < 5; i++){
            cout<<arr1[i];
        }
        cout<<" "<<endl;
        reversing();
    }
    void reversing(){
        for(int i = 0; i < 5; i++){
            arr2[i] = arr1[(4-i)];
        }
        cout<<"the reversed array is: "<<endl;
        for(int i = 0; i < 5; i++){
            cout<<arr2[i];
        }
    }
};

int main(){
    // char x;
    // cout<<"enter characters of the string, one by one"<<endl;
    // for(int j = 0; j < 3; j++){
    //     cin>>x;
    //     arr1[j] = x;
    // }
    reverseString s1;
    s1.inputting();
    return 0;
}
