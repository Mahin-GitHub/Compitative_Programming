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

void insert_data_tail(Node *&head, Node *&tail, int data)
{
    Node *newData = new Node(data);
    if (head == NULL)
    {
        head = newData;
        tail = newData;
        return;
    }

    tail->next = newData;
    tail = newData;
}

void print_data(Node *head)
{
    Node *temp = head;

    if (temp == NULL)
    {
        return;
    }
    
    print_data(temp->next);
    cout << temp->data << " ";
}
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

        insert_data_tail(head, tail, x);
    }

    print_data(head);

    return 0;
}