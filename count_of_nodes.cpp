#include<iostream>
#include<algorithm>
using namespace std;
/**counting numbers of nodes and sum of values of nodes
 * 
 */
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

int countNodes(Node* root){
    if(root==NULL){
        return 0;
    }
   
    return countNodes(root->left)+countNodes(root->right) +1;
}
int countSum(Node* root){
    if(root==NULL){
        return 0;
    }
        return countSum(root->left)+countSum(root->right)+root->data;
}

int main()
{
       Node* root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(4);
    root->left->left=new Node(5);
    int value=countNodes(root);
    cout<<value<<endl;
    cout<<countSum(root);
    return 0;
}