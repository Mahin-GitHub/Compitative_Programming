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
    if (head == NULL)
    {
        head = newDataTail;
        tail = newDataTail;
        return;
    }
    tail->next = newDataTail;
    tail = newDataTail;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insert_tail_data(head, tail, x);
        print_link_list_data(head);
    }

    return 0;
}