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
    // it will give the linkedlist size
    int getSize()
    {
        return sz;
    }
    // insert the given data at index
    void InsertAtIndex(int index, int data)
    {
        if(index > sz) return;
        if(index == 0)
        {
            InsertAtHead(data);
            return;
        }
        int currentIndex = 0;
        node * a = head;
        while( a != currentIndex){
            a = a->nxt;
            currentIndex++;

        }
        // a  = currentIndex - 1
        node *newNode = CreateNewNode(data);
        newNode->nxt = a->nxt;
        newNode->prv = a;
        node *b = a->nxt;
        b->prv = newNode;
        a->nxt = newNode;
        sz++;
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
    dl.InsertAtIndex(2,320;)

    dl.Traverse();
    cout<<"Size DL:"<<dl.getSize();
    return 0;
}
