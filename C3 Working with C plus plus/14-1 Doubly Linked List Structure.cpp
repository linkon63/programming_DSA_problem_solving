#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
    node *prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    // creates a new node with given data and return
    node *CreateNewNode(int data)
    {
        node *newNode = new node;
        newNode-> data = data;
        newNode->nxt = NULL;
        newNode->prv = NULL;
        return newNode;
    }
    // insert node at head given  data;
    void InsertAtHead(int data)
    {
        node *newNode = CreateNewNode(data);
        if(head == NULL)
        {
            sz++;
            head = newNode;
            return;
        }
        sz++;
        node *a = head;
        newNode->nxt = a;
        a->prv = newNode;
        head = newNode;
    }
    void Traverse()
    {
        node *a = head;
        while(a !=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
    int getSize()
    {
        return sz;
    }
};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(20);
    dl.InsertAtHead(30);
    dl.InsertAtHead(40);

    dl.Traverse();
    cout<<"Size DL:"<<dl.getSize();
    return 0;
}
