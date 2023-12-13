#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = NULL;  // Use NULL instead of NULL for modern C++
        right = NULL;
    }
};

int search(int inorder[], int start, int end, int curr) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == curr) {
            return i;
        }
    }
    return -1;
}



void printInorder(Node* root) {
    if (root == NULL) {
        return;
    }

    printInorder(root->left);
cout << root->data << " ";
    printInorder(root->right);
}


  Node* buildTree(int inorder[],int preorder[],int start,int end){
     if(start>end){
        return NULL;
    }
  
    static int idx=0;

    int curr=preorder[idx];
    idx++;
    Node* node =new Node(curr);
     
   if(start==end){
    return node;    
   }

   int pos= search(inorder,start,end,curr);
   node->left=buildTree(inorder,preorder,start,pos-1);
   node->right=buildTree(inorder,preorder,pos+1,end);
    // new Node=new


   }


int main()
{
 int preorder[]={1,2,4,3,5};
   int inorder[]={4,2,1,5,3};
   Node* root = buildTree(inorder,preorder,0,4);

   printInorder(root);



    return 0;
}