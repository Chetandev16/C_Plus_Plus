#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next=NULL;
    }
};

void printlist(Node *node){
    Node *curr = node;
    while(curr != NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}

Node *rev(Node *node){
    vector <int>arr;
    for(Node *curr=node; curr!=NULL;curr=curr->next){
        arr.push_back(curr->data);
    }

    for(Node *curr=node; curr!=NULL; curr=curr->next){
        curr->data = arr.back();
        arr.pop_back();
    }

    return node;
} 
////EFFICIENT ONE
/*
Node *rev(Node *node){
    return
}*/

int main(){
    Node *head = new Node(10);
    head->next =  new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    printlist(head);
    cout<<endl;
    head= rev(head);
    printlist(head);

    return 0;
}