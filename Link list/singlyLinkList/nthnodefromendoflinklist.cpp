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
 /// GFG CODES
/*int nthnode(Node *node, int x){
    if(node == NULL){
        return -1;
    }
    Node *first = node;
    for(int i=0;i<x;i++){
        first = first->next;
    }
    Node *second = node;
    while(first != NULL){
        second = second->next;
        first= first->next;
    }

    return second->data;

}*/

int nthnode(Node *node, int x){
    if(node == NULL){
        return -1;
    }
    int count=0;
    Node *trav = node;
    while(trav->next != NULL){
        trav = trav ->next;
        count++;
    }
    count+1;
    if(count<x){
        return -1;
    }
    Node *final = node;
    for(int i=0;i<=(count-x);i++){
        final = final->next;
    }

    return final->data;

}

int main()
{
    //Node *head = NULL;

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    int pos;
    cin >> pos;
    printlist(head);

    cout << endl;
    int ans = nthnode(head, pos);
    cout << ans;
    return 0;
}