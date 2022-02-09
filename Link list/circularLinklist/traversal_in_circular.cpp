#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void traversal_circular(Node *node)
{
    if (node == NULL)
    {
        return;
    }

    // Node *curr = node->next;
    // cout<<node->data<<" ";
    // while (curr != node)
    // {
    //    cout<<curr->data<<" ";
    //    curr=curr->next;
    // }
    Node *curr = node;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != node);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    head->next->next->next->next = head;
    traversal_circular(head);
    return 0;
}