#include<iostream>
#include<algorithm>
#include<queue>
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

void printLevel_Order(Node* root){
     
    if(root==NULL){
        return;
    }
    queue<Node*> q;
  q.push(root);
    while(!q.empty()){
        Node* current=q.front();
        cout<<current->data<<" ";
       q.pop();
       
       if(current->left!=NULL)
        q.push(current->left);

       if(current->right!=NULL)
        q.push(current->right);
    }

}




// void printLevelOrder(Node* root){
//     if(root==NULL){
//         return;
//     }

//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty()){
        
//        if(q.front()==NULL){
//         if(!q.empty()){
//             q.push(NULL);
//         }
//         else{
//             return;
//         }
//        }
//        cout<<q.front();
//         q.pop();
//         q.push(root->left);
//         q.push(root->right);
                

//     }
   
    
// }

int main()
{
    // Node* root=new Node(1);

    // root->left=new Node(2);
    // root->right=new Node(3);
    // root->left->right=new Node(4);
    // root->left->left=new Node(5);

    // printLevel_Order(root);

    return 0;
}
