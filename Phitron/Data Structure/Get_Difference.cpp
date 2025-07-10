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

void insertNodeData(Node *&head, Node *&tail, int data)
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

int maxData(Node *head)
{
    Node *temp = head;

    int maxValue = INT_MIN;
    for (Node *i = temp; i != NULL; i = i->next)
    {
        if (maxValue <= i->data)
        {
            maxValue = i->data;
        }
    }

    return maxValue;
}
int minData(Node *head)
{
    Node *temp = head;

    int minValue = INT_MAX;
    for (Node *i = temp; i != NULL; i = i->next)
    {
        if (minValue >= i->data)
        {
            minValue = i->data;
        }
    }

    return minValue;
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
        insertNodeData(head, tail, x);
    }

    int maxNumber = maxData(head);
    int minNumber = minData(head);
    int def = maxNumber - minNumber;
    cout << def << endl;
    // cout << maxNumber << " " << minNumber << " ";
    return 0;
}