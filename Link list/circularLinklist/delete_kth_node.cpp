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

Node *delete_kth_node(Node *head, int key)
{

    if (head == NULL)
        return NULL;

    if (key == 1)
    {
        Node *temp = head->next;
        head->data = head->next->data;
        head->next = temp->next;
        delete (temp);
        return head;
    }

    Node *curr = head;
    for (int i = 1; i < key - 1; i++)
    {
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete (temp);
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
    head = delete_kth_node(head, 3);
    printlist(head);
    return 0;
}