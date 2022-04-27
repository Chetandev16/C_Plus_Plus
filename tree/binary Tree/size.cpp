#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

// using recursion
int getSize(Node *root)
{
    if (root == NULL)
        return 0;
    else
    {
        return 1 + getSize(root->left) + getSize(root->right);
    }
}

// using level order traversal
int countnode(Node *root)
{
    if (root == NULL)
        return 0;
    queue<Node *> q;
    int count = 0;
    q.push(root);
    while (q.empty() == false)
    {
        Node *curr = q.front();
        q.pop();
        count++;
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }

    return count;
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
    // int noofnode = countnode(root);
    int noofnode = getSize(root);
    cout << noofnode;
    return 0;
}