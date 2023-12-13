#include<iostream>
#include<algorithm>
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
int calcHeight(Node* root){
      if(root==NULL){
        return 0;
    }
    return max(calcHeight(root->left),calcHeight(root->right))+1;
}
int calcDiameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int LHeight=calcHeight(root->left);
    int RHeight=calcHeight(root->right);

    int currDiameter=LHeight+RHeight+1;

    int LDiameter=calcDiameter(root->left);
    int RDiameter=calcDiameter(root->right);

    return max(currDiameter,max(LDiameter,RDiameter));

}
int main()
{
    Node* root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(4);
    root->left->left=new Node(5);
    cout<<calcDiameter(root);
    return 0;
}