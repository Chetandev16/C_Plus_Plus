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

void printlist(Node *head)
{
    Node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
}
// naive O(n)
Node *insert_end_naive(Node *node, int key)
{
    Node *temp = new Node(key);
    if (node == NULL)
    {
        temp->next = temp;
        return temp;
    }
    Node *curr = node;
    while (curr->next != node)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->next = node;
    return node;
}
// efficient one

Node *insert_end_efficient(Node *node, int key)
{
    Node *temp = new Node(key);
    if (node == NULL)
    {
        temp->next = temp;
        return temp;
    }
    temp->next = node->next;
    node->next = temp;

    int x = node->data;
    node->data = temp->data;
    temp->data = x;
    return temp;

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
    // head = insert_end_naive(head, 56);
    head = insert_end_efficient(head, 50);
    printlist(head);

    return 0;
}