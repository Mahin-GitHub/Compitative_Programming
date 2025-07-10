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

int countIndex(Node *head, int val)
{

    int index = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == val)
        {
            return index;
        }
        temp = temp->next;
        index++;
    }

    return -1;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
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
        int v;
        cin >> v;
        int indexValue = countIndex(head, v);
        cout << indexValue << endl;
    }

    return 0;
}