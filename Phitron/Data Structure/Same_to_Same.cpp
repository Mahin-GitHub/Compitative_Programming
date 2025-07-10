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

void insertData(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void matchData(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            cout << "NO" << endl;
            return;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 != NULL || temp2 != NULL)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insertData(head1, tail1, x);
    }
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insertData(head2, tail2, x);
    }

    matchData(head1, head2);
    return 0;
}