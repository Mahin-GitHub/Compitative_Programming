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

void insertData(Node *&head, Node *&tail, int data)
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

void removeDuplicates(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *prevNode = temp;
        Node *nextNode = temp->next;

        while (nextNode != NULL)
        {
            if (temp->data == nextNode->data)
            {
                prevNode->next = nextNode->next;
                delete nextNode;
                nextNode = prevNode->next;
            }
            else
            {
                prevNode = nextNode;
                nextNode = nextNode->next;
            }
        }
        temp = temp->next;
    }
}

void printData(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return;
    }

    cout << temp->data << " ";
    printData(temp->next);
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
        insertData(head, tail, x);
    }
    removeDuplicates(head);
    printData(head);
    return 0;
}