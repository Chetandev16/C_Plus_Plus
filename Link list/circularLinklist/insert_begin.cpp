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

void printlist(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    Node *curr = node;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != node);
}
// naive
Node *insert_begin_naive(Node *head, int key)
{
    Node *curr = head;
    Node *temp = new Node(key);

    if (head == NULL)
    {
        temp->next = temp;
    }

    while (curr->next != head)
    {
        curr = curr->next;
    }

    curr->next = temp;
    temp->next = head;
    return temp;
}
// optimised:_)
Node *insert_begin_efficient(Node *head, int key)
{
    Node *temp = new Node(key);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }

    temp->next = head->next;
    head->next = temp;

    int t = head->data;
    head->data = temp->data;
    temp->data = t;
    return head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    head->next->next->next->next = head;
    printlist(head);
    cout << endl;
    // head = insert_begin_naive(head, 56);
    head = insert_begin_efficient(head, 50);
    printlist(head);
    return 0;
}