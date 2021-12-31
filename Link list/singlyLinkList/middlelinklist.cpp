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
/* gfg code*/
int Middlelinklist(Node *node)
{
    Node *slow = node;
    Node *fast = node;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast= fast->next->next;
    }
    return slow->data;
}
/* MYcode */
/*int Middlelinklist(Node *node)
{
    int count = 0;
    Node *curr = node;
    if (node == NULL)
        return 0;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    Node *ans = node;
    if (count == 2)
    {
        return ans->next->data;
    }

    else if (count % 2 != 0)
    {
        for (int i = 1; i < (count + 1) / 2; i++)
        {
            ans = ans->next;
        }
        return (ans->data);
    }
    else
    {
        for (int i = 1; i < (count) / 2; i++)
        {
            ans = ans->next;
        }
        if ((ans->data) < (ans->next->data))
            return ans->data;
        else
            return ans->next->data;
    }

    return ans->data;
}
*/
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(19);
    head->next->next->next = new Node(40);
    //head->next->next->next->next = new Node(40);
    printlist(head);
    cout << endl;
    int x = Middlelinklist(head);
    cout << x;

    return 0;
}