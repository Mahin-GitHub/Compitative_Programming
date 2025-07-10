#include <bits./stdc++.h>
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

void duplicateCheck(Node *head)
{
    int duplicate = false;
    Node *temp = head;

    for (Node *i = temp; i != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->data == j->data)
            {
                duplicate = true;
                break;
            }
        }
        if (duplicate == true)
        {
            break;
        }
    }

    if (duplicate == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
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

    duplicateCheck(head);
}