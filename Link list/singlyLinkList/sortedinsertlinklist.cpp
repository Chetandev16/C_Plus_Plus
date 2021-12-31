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
    Node *curr = node;
    while (curr != NULL)
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }
}

Node *sortedLinklist(Node *node, int x)
{
    Node *temp = new Node(x);
    Node *curr = node;

    if (node == NULL)
    {
        return node;
    }
    if ((curr->data) > x)
    {
        temp->next = node;
        return temp;
    }

    while ((curr->next) != NULL)
    {
        if (((curr->data) <= x) && ((curr->next->data) > x))
        {
            temp->next = curr->next;
            curr->next = temp;
            break;
        }
        curr = curr->next;
    }

    curr->next = temp;
    return node;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    int val;
    cin >> val;

    printlist(head);
    cout << endl;
    head = sortedLinklist(head, val);
    printlist(head);

    return 0;
}