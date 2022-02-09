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
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != node);
}
// naive
Node *delete_head(Node *node)
{
    if (node == NULL)
        return NULL;   

    if (node->next == node)
    {
        delete node;
        return NULL;
    }

    Node *curr = node;

    while (curr->next != node)
    {
        curr = curr->next;
    }
    curr->next = node->next;
    delete node;
    return (curr->next);
}

//efficient one
Node *delete_head_efficient(Node *node){
    if(node == NULL){
        return NULL;
    }
    if(node->next == node){
        delete(node);
        return NULL;
    }

    Node *temp = node->next;
    node->data = node->next->data;
    node->next = node->next->next;
    delete(temp);
    return node;
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
    // head = delete_head(head);
    head = delete_head_efficient(head);
    printlist(head);
    return 0;
}