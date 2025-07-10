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
    };
};

void insert_node_tail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_node(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    cout << temp->data << " ";
    print_node(temp->next);
}

void delete_node_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void 
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }

        insert_node_tail(head, tail, x);
    }
    delete_node_head(head);
    delete_node_head(head);
    print_node(head);
    return 0;
}