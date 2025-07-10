#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void singly_link_list_print(Node *head)
{
    Node *temp = head;
    // temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}



int main()
{

    Node *head;
    Node *tail;
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    head = a;
    tail = c;
    a->next = b;
    b->next = c;

    singly_link_list_print(head);
    // cout << a->next->next->next->data;
}