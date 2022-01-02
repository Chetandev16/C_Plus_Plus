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

void printLinklist(Node *node)
{
    Node *curr = node;
    while (curr != NULL)
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }
}

Node *deleteNode(Node *node)
{
    if (node == NULL)
        return NULL;
    if (node->next == NULL)
    {
        delete (node);
        return NULL;
    }

    Node *curr = node;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete (curr->next);
    curr->next = NULL;

    return node;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    head = deleteNode(head);
    printLinklist(head);
    return 0;
}