#include<iostream>
#include<algorithm>
using namespace std;


class Node{
    public:
    int data;
    Node* right;
    Node* left;

    Node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }

};
void replaceSum(Node* root){
    if(root==NULL){
        return;
    }
    replaceSum(root->left);
    replaceSum(root->right);
    if(root->left!=NULL){
        root->data+=root->left->data;
    }
      if(root->right!=NULL){
        root->data+=root->right->data;
    }
}

void preorder(Node* root){
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}



int main()
{
    Node* root=new Node(2);
    root->left=new Node(2);
    root->right=new Node(2);
    root->left->right=new Node(2);
    root->right->right=new Node(2);

    replaceSum(root);
    preorder(root);
    return 0;
}