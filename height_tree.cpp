#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

class Node{
public:
int data;
Node* right;
Node* left;

Node(int value){
    data=value;
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

int main()
{
      Node* root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(4);
    root->left->left=new Node(5);
    cout<<calcHEight(root);
    
    return 0;
}