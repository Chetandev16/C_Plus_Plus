#include<bits/stdc++.h>
using namespace std; 

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int k)
    {
        data = k;
        left = right = NULL;
    }
};


void morris(Node *root){
    Node *curr,*pre;
    curr = root;

    while(curr != NULL){
        if(curr->left == NULL){
            cout<<curr->data<<" ";
            curr=curr->right;
        }
        else{
            pre = curr->left;
            while (pre->right != NULL && pre->right != curr){
                pre = pre->right;
            }

            if(pre->right == NULL){
                pre->right = curr;
                curr = curr->left;
            }
            else{
                pre->right = NULL;
                cout<<curr->data<<" ";
                curr = curr->right;
            }
            
        }
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->right = new Node(6);
    root->left->right = new Node(5);
    root->left->left = new Node(4);
    root->left->left->right = new Node(7); 
    morris(root);
    return 0;
}