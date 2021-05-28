#include<bits/stdc++.h>
using namespace std;

struct Tree{
    int data;
    struct Tree *left, *right;
    Tree(int data){
        this->data = data;
        left = right = NULL;
    }
};

void printPostOrder(struct Tree* node){
    //left to right

    if(node == NULL) return;

    printPostOrder(node->left);
    printPostOrder(node->right);

    cout<<node->data<<" ";
}

void printPreOrder(struct Tree* node){
    //top to first left side
    if(node == NULL) return;

    cout<<node->data<<" ";
    printPreOrder(node->left);
    printPreOrder(node->right);
}

void printInOrder(struct Tree* node){
    //left top right
    if(node == NULL) return;
    printInOrder(node->left);
    cout<<node->data<<" ";
    printInOrder(node->right);
}

int main(){
    struct Tree* root = new Tree(3);
    root->left = new Tree(4);
    root->right = new Tree(5);
    root->left->left = new Tree(6);
    root->left->right = new Tree(10);
    root->right->right = new Tree(50);
    root->right->left = new Tree(7);

    printPostOrder(root);
    cout<<" "<<endl;
    printPreOrder(root);
    cout<<" "<<endl;
    printInOrder(root);
}
