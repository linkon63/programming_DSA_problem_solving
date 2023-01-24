
#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node * nxt;
};

class LinkedList
{
public:
    node *head;

    LinkedList()
    {
        head = NULL;
    }

    // Creates a new node with data = value and nxt = NULL
    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }
    // insert new value at the head
    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        // if head is not null
        a->nxt = head;
        head = a;
    }
    // print the linkedlist
    void Traverse()
    {
        node *a = head;
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
    // search for a single value
    void SearchDistinctValue(int value)
    {

    }
    // search all possible occurrence
    void SearchAllValue(int value)
    {

    }
};

int main()
{
    LinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    l.Traverse();

    l.SearchDistinctValue(5);
    l.SearchAllValue(30);
    return 0;
}



