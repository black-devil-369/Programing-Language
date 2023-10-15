#include<iostream>
#include<stdio.h>
using namespace std;
struct Node{
    Node* left;
    int item;
    Node* right;
};
class BST{
    private:
       Node *root;
    public:
       BST();
       void insert(int);
       bool isEmpty();
};
bool BST::isEmpty(){
    return root==NULL;
}
void BST::insert(int data){
    Node *temp;
    Node *n = new Node();
    n->left = NULL;
    n->item = data;
    n->right = NULL;
    if(root==NULL){
        root = n;
    }
    else{
        temp = root;
        while(n->item!=temp->item){
            if(n->item<temp->item){
                if(temp->left!=NULL){
                    temp = temp->left;
                }
                else{
                    temp->left = n;
                    break;
                }
            }
            else{
                if(temp->right!=NULL){
                    temp = temp->right;
                }
                else{
                    temp->right = n;
                    break;
                }
            }
        }
        if(temp->item==n->item){
            delete n;
        }
    }
}
BST::BST(){
    root = NULL;
}