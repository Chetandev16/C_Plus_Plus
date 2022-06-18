#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *right, *left;
    Node(int k)
    {
        key = k;
        right = left = NULL;
    }
};

void preorder(Node *root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->left->left = new Node(50);
    root->left->left->right = new Node(60);
    root->right->right = new Node(70);
    root->right->left = new Node(90);
    root->right->left->right = new Node(100);
    preorder(root);
    return 0;
}