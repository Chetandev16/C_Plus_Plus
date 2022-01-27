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

Node *swapnode(Node *node){
    Node *curr= node;
    int count=1;
    while(curr->next!=NULL){
        count++;
        curr=curr->next;
    }
    Node *temp = node;
    for(int i=1;i<2-1;i++){
        temp=temp->next;
    }
    Node *temp1 = temp->next;
    temp->next = temp1->next;
    int x = temp1->data;
    delete(temp1);

    Node *temp2 = new Node(x);
    curr = node;
    temp=temp->next;
    Node *h = temp->next;
    temp->next = temp2;
    temp2 ->next=h;

    return curr;
}


int main()
{

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    printlist(head);
    cout<<endl;
    head = swapnode(head);
    
    printlist(head);
    return 0;
}