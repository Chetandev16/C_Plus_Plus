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

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }
}

Node *insertend(Node *node, int val)
{
    Node *temp = new Node(val);
    if (node == NULL)
    {
        return temp;
    }

    Node *curr = node;
    while ((curr->next) != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;

    return node;
}

int main()
{
    Node *head = NULL;
    head = insertend(head, 10);
    head = insertend(head, 20);
    head = insertend(head, 30);
    head = insertend(head, 40);

    printList(head);
    return 0;
}