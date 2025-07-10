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

void print_link_list_data(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insert_head_data(Node *&head, int data)
{
    Node *newDataHead = new Node(data);
    newDataHead->next = head;
    head = newDataHead;
}

void insert_tail_data(Node *&head, Node *&tail, int data)
{
    Node *newDataTail = new Node(data);
    tail->next = newDataTail;
    tail = newDataTail;
}
int main()
{

    Node *head;
    Node *tail;
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);

    a->next = b;
    b->next = c;

    head = a;
    tail = c;
    insert_head_data(head, 5);
    insert_head_data(head, 50);
    insert_tail_data(head, tail, 11);
    print_link_list_data(head);

    return 0;
}