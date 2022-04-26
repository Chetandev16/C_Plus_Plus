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
Node *deletemid(Node *node, int data){
    if(node == NULL){
        return NULL;
    }

    Node *curr = node;
    while(curr->next->data != data ){
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = temp->next;
    delete(temp);
    return node;
}

int main(){
    Node *head = new Node(10);
    head -> next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    printlist(head);
    head = deletemid(head,30);
    cout<<endl;
    printlist(head);
    return 0;
}