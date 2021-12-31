#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printlist(Node *node){
    Node *curr = node;
    while(curr != NULL){
        cout<<(curr->data)<<" ";
        curr = curr->next;
    }
}

Node *deletefirst(Node *node){
    if(node == NULL){
        return NULL;
    }

    Node *curr = node;
    curr = curr->next;
    delete(node);
    return curr;
}

int main(){
    Node *head = new Node(10);
    head -> next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    printlist(head);
    head = deletefirst(head);
    cout<<endl;
    printlist(head);
    return 0;
}