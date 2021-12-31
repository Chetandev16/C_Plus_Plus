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

int recsearchLinkList(Node *node, int key)
{
    if (node == NULL)
        return -1;
    if ((node->data) == key)
        return 1;
    else
    {
        int res = recsearchLinkList(node->next, key);
        if (res == -1)
            return -1;
        else
            return (1 + res);
    }
}

int searchLinkList(Node *node, int key)
{
    int pos = 0;
    Node *curr = node;
    while (curr != NULL)
    {
        pos++;
        if ((curr->data) == key)
        {
            return pos;
        }
        curr = curr->next;
    }
    return -1;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(20);
    head->next->next->next = new Node(20);
    int key;
    cin >> key;
    //int ans = searchLinkList(head, key);
    int ans = recsearchLinkList(head, key);

    if (ans == -1)
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found at " << ans;
    }
    return 0;
}