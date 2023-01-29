
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
    int sz;
    LinkedList()
    {
        head = NULL;
        sz = 0;
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
            sz++;
            head = a;
            return;
        }
        sz++;
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
        cout<<"\n\n";
    }
    // search for a single value
    int SearchDistinctValue(int value)
    {
        node *a = head;
        int index = 0;
        while(a != NULL)
        {
            if(a->data == value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }
    // search all possible occurrence
    void SearchAllValue(int value)
    {
        node *a = head;
        int index = 0;
        while(a != NULL)
        {
            if(a->data == value)
            {
                cout<<"Index at :"<<index<<endl;
            }
            a = a->nxt;
            index++;
        }
    }

    int getSize()
    {
        return sz;
        // order of n = o(n)
//        int sz = 0;
//        node *a = head;
//        while(a !=NULL){
//            sz++;
//            a = a->nxt;
//        }
//        return sz;
    }
    void InsertAtAnyIndex(int index, int value)
    {
        if(index < 0 || index > sz)
        {
            return;
        }
        if(index ==0)
        {
            InsertAtHead(value);
            return;
        }
        sz++;
        node *a = head;
        int currentIndex = 0;
        while(currentIndex != index-1)
        {
            a = a->nxt;
            currentIndex++;
        }
        node *newNode = CreateNewNode(value);
        newNode->nxt = a->nxt;
        a->nxt = newNode;
    }

    void DeleteAtHead()
    {
        if(head == NULL) return;
        sz--;
        node *a = head;
        head = a->nxt;
        delete a;
    }
    void DeleteAtAnyIndex(int index)
    {
        if(index < 0 || index > sz)
        {
            return;
        }
        if(head == 0)
        {
            DeleteAtHead();
        }
        sz--;
        node *a = head;
        int currentIndex = 0;
        while(currentIndex != index-1)
        {
            a = a->nxt;
            currentIndex++;
        }
        node *b = a->nxt;
        a->nxt = b->nxt;
        delete b;
    }
};

int main()
{
    LinkedList l;
    l.InsertAtHead(10);
    // l.Traverse();
    l.InsertAtHead(30);
    // l.Traverse();
    l.InsertAtHead(20);
    // l.Traverse();
    l.InsertAtHead(30);

    // l.SearchDistinctValue(5);

    cout<<"Found size:"<<l.getSize()<<endl;
    l.Traverse();

    l.InsertAtAnyIndex(2,500);
    cout<<"Found size:"<<l.getSize()<<endl;
    l.Traverse();

    l.InsertAtAnyIndex(5,600);
    cout<<"Found size:"<<l.getSize()<<endl;
    l.Traverse();

    l.DeleteAtHead();
    cout<<"Found size:"<<l.getSize()<<endl;
    l.Traverse();

    l.DeleteAtAnyIndex(4);
    cout<<"Found size:"<<l.getSize()<<endl;
    l.Traverse();

    // int ans = l.SearchDistinctValue(30);
    // int ans = l.SearchAllValue(30);
//    cout<<"Found the index : "<<l.SearchDistinctValue(10)<<endl;
//    l.SearchAllValue(30);


    return 0;
}




