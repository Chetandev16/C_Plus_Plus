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

int height(Node *root)
{
    if (root == NULL)
        return 0;
    else
    {
        return max(height(root->left), height(root->right)) + 1;
    }
}

void levelorder(Node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
    {
        cout << root->key << " ";
    }
    else
    {
        levelorder(root->left, k - 1);
        levelorder(root->right, k - 1);
    }
}

// efficient one using queue data structure
void printlevelorder(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q; //queue<type> q; type = int,pointer,string etc
    q.push(root);
    while (q.empty() == false)
    {
        Node *curr = q.front();
        cout << curr->key << " ";
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    int h = height(root);
    // for (int i = 0; i < h; i++)
    // {
    //     levelorder(root, i);
    // }
    printlevelorder(root);
    return 0;
}