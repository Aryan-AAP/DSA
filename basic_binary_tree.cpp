#include<iostream>
#include<algorithm>

using namespace std;
class Node{
public:
int data;
Node* left;
Node* right;
Node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
int calcHEight(Node* root){
    if(root==NULL){
        return 0; 
    }
    return max(calcHEight(root->left),calcHEight(root->right))+1;
}
bool isbalanced(Node* root){

    if(root==NULL){
        return 0;
    }
    isbalanced(root->left);
    isbalanced(root->right);

    // if((calcHEight(root->left)-calcHEight(root->right)<=1)||(calcHEight(root->left)-calcHEight(root->right)<=-1)){
        if(abs(calcHEight(root->left)-calcHEight(root->right))==1){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    
       Node* root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(5);
    // root->left->right=new Node(5);
    cout<<isbalanced(root);
    

    return 0;
}