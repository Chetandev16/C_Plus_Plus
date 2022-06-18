#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


Node *insertintoBST(Node *root, int data){
    if(!root) {
        root = new Node(data);
        return root;
    };
    if(data > root->data){
        //right
        root->right = insertintoBST(root->right,data);
    }else{
        root->left = insertintoBST(root->left,data);
    }
    return root;
}

void takeInput(Node *&root){
    int data;
    cin>>data;

    while(data != -1){
        root = insertintoBST(root, data);
        cin>> data;
    }
}

void levelorder(Node *root){
    if(!root) {
        cout<<"null";
        return;
    };

    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(q.empty() == false){
        Node *f = q.front();
        q.pop();
        if(f == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<f->data<<" ";
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }

    }
}

int main()
{
    Node *root = NULL;
    cout<<"data to create bst"<<endl;
    takeInput(root);

    levelorder(root);

    return 0;
}