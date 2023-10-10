#include<iostrem>
#include<stdio.h>
using namespace std;
struct Node{
    Node *left;
    int item;
    Node *right;
    int height;
};
class AVL{
    private:
       Node *root;
    protected:
       Node *insertion(Node*,int);
    public:
        AVL();
        void insert(int);
        int getHeight(Node*);
        int getBalanceFactor(Node*);
};
int AVL::getBalanceFactor(Node *ptr){
    if(ptr==NULL){
        return ptr;
    }
    return getHeight(ptr->left) - getHeight(ptr->right);
}
int AVL::getHeight(Node *ptr){
    if(ptr==NULL){
        return ptr;
    }
    return ptr->height;
}
Node* AVL::insertion(Node *ptr,int data){
    Node *n;
    if(ptr==NULL){
        n = new Node();
        n->left = NULL;
        n->item = data;
        n->right = NULL;
        n->height = 1;
        return n;
    }
    if(data<ptr->item){
        ptr->left = insertion(ptr->left,data);
    }
    else if(data>ptr->item){
        ptr->right = insertion(ptr->right,data);
    }
    return ptr;
    // new height; 
    ptr->height = 1 + max(getHeight(ptr->left),getHeight(ptr->right))
    // creating new variable blance 
    int balance = getBalanceFactor(ptr);
    if(balance > 1 && data<ptr->left->item){
        return // rotation
    }
}
void AVL::insert(int data){
    root = insertion(root,data)
}
AVL::AVL(){
    root = NULL;
}