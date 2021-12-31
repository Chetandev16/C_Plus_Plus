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

/* //////////////////////////////////////////////////////////////// my code  //////////////////////////////////////////////////////////////////////////////////**/

/*Node *insertatpos(Node *node, int pos, int val)
{
    Node *val1 = new Node(val);
    if (node == NULL)
    {
        return NULL;
    }

    if (pos == 1)
    {
        val1->next = node;
        return val1;
    }

    int count = 1,check=0;
    Node *curr = node;
    while (curr != NULL)
    {
        if (count == pos)
        {
            Node *temp = curr;
            val1->next = temp;
            check++;
            break;
        }
        curr = curr->next;
        count++;
    }

    if (check == 0)
    {
        return node;
    } // check whether given position is invalid or not

    Node *curr2 = node;
    int c = 1;
    while (c != pos - 1)
    {
        c++;
        curr2 = curr2->next;
    }
    curr2->next = val1;
    return node;
} *

/* //////////////////////////////////////////////////////////////// gfg code  //////////////////////////////////////////////////////////////////////////////////**/

Node *insertatpos(Node *node, int pos, int val){
    Node *temp = new Node(val);
    if(pos == 1){
        temp ->next = node;
        return temp;
    }

    Node *curr = node;
    for(int i=1;i<pos-1 && curr!=NULL;i++){
        curr = curr->next;
    }

    if(curr == NULL){
        return node;
    }

    temp->next = curr->next;
    curr->next = temp;

    return node;

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
    head = insertatpos(head, pos, 50);
    printlist(head);
    return 0;
}