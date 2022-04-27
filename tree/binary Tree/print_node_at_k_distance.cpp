#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

void print(Node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
    {
        cout << root->key << " ";
    }

    else
    {
        print(root->left, k - 1);
        print(root->right, k - 1);
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(6);
    root->left->right = new Node(26);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    print(root, 2);

    return 0;
}