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

Node *swap2node(Node *node, int c1, int c2)
{
    Node *temp1=node,*temp2=node;
    int count=1;
    Node *counter =node;
    while(counter!=NULL){
        counter = counter->next;
        count++;
    }

    for(int i=1;i<=c1;i++){
        temp1=temp1->next;
    }
    // return temp1;
    for(int i=1;i<=c2;i++){
        temp2=temp2->next;
    }
    // return temp2;
    Node *swap1=temp1,*swap2=temp2;
    
    swap1->next = temp2->next;
    return swap1;
    swap2->next = temp1->next;
    return swap2;

    return node;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    head = swap2node(head, 2, 5);
    printList(head);
    return 0;
}