#include<bits/stdc++.h>
using namespace std;

class s{
    public:
    int data;
    s* left;
    s* right;

    s(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main(){
    s* root = new s(1);

    root->left = new s(2);
    root->right = new s(3);

    root->left->left = new s(4);
    root->left->right = new s(10);
    return 0;
}