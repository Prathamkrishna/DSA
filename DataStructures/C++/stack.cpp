#include<bits/stdc++.h>
using namespace std;

class Stacks{
    public:
    vector<int>arr1 = vector<int>(20);
    int topmost = 0;

    int pushingElement(int y){  
        arr1[topmost] = y;
        cout<<topmost<<"value"<<y<<endl;
        topmost++;
        return 0;
    }

    int popElement(){
        arr1[--topmost];
        cout<<"the number of elements in this array are: "<<topmost<<endl;
        for(int i = 0; i < topmost; i++){
            cout<<arr1[i]<<endl;
        }
        return 0;
    }
};

int main(){
    Stacks s;
    s.pushingElement(5);
    s.pushingElement(4);
    s.pushingElement(3);
    s.pushingElement(2);
    s.popElement();
    s.popElement();
    return 0;
}
