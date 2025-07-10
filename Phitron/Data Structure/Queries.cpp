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

void insertDataHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insertDataTail(Node *&head, Node *&tail, int val)
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

void printNodeData(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    cout << temp->data << " ";
    printNodeData(temp->next);
}

void deleteIndexPosData(Node *&head, Node *&tail, int pos)
{
    if (head == NULL)
    {
        return;
    }

    if (pos == 0)
    {
        Node *deleteNode = head;
        head = head->next;

        if (head == NULL)
        {
            tail = NULL;
        }
        delete deleteNode;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        if (temp == NULL || temp->next == NULL)
        {
            return;
        }
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    if (deleteNode == NULL)
    {
        return;
    }

    temp->next = deleteNode->next;
    if (deleteNode == tail)
    {
        tail = temp;
    }
    delete deleteNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insertDataHead(head, tail, v);
        }
        else if (x == 1)
        {
            insertDataTail(head, tail, v);
        }

        else if (x == 2)
        {

            deleteIndexPosData(head, tail, v);
        }
        printNodeData(head);
        cout << endl;
    }

    return 0;
}