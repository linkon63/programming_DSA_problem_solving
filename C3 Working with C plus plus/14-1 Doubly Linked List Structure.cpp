#include <bits/stdc++.h>
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
    // creates a new node with given data and return o(1)
    node *CreateNewNode(int data)
    {
        node *newNode = new node;
        newNode->data = data;
        newNode->nxt = NULL;
        newNode->prv = NULL;
        return newNode;
    }
    // insert node at head given  data; o(1)
    void InsertAtHead(int data)
    {
        node *newNode = CreateNewNode(data);
        if (head == NULL)
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
    // o(n)
    void Traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }
    // it will give the linkedlist size o(1)
    int getSize()
    {
        return sz;
    }
    // insert the given data at index o(n)
    void InsertAtIndex(int index, int data)
    {
        if (index > sz)
            return;
        if (index == 0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int currentIndex = 0;
        while (currentIndex != index-1)
        {
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
    // delete the node from given index o(n)
    void Delete(int index)
    {
        if (index > sz)
            return;
        node * a = head;
        int currentIndex = 0;
        while(currentIndex != index)
        {
            a = a->nxt;
            currentIndex++;
        }
        node *b = a->prv;
        node *c = a->nxt;
        if(b!=NULL)
        {
            b->nxt = c;
        }
        if(c!=NULL)
        {
            c->prv = b;
        }
        delete a;
        if(index == 0)
        {
            head = c;
        }
        sz--;
    }
    // reverse o(2*n) = o(n)
    void Reverse(){
        if(head == NULL) return;
        node *a = head;
        int currentIndex = 0;
        while(currentIndex !=sz-1){
            a= a->nxt;
            currentIndex++;
        }
        // last index is in a
        node *b = head;
        while(b!=NULL){
            swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
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
    cout << "Size DL:" << dl.getSize()<<endl;
    dl.InsertAtIndex(2, 320);
    dl.Traverse();
    cout << "Size DL:" << dl.getSize()<<endl;
    // cout << "Size DL:" << dl.getSize();

    dl.Delete(2);
    dl.Traverse();
    cout << "Size DL:" << dl.getSize()<<endl;

    dl.Reverse();
    dl.Traverse();

    return 0;
}
