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
    // getSize
    int getSize()
    {
        node *a = head;
        int llSize = 0;
        while(a != NULL)
        {
            a = a->nxt;
            llSize++;
        }
        return llSize;
    }
    // getValue
    int getValue(int index)
    {
        node *a = head;
        int index1 = 0;
        while(a != NULL)
        {
            if(index == index1)
            {
                return a->data;
            }
            a = a->nxt;
            index1++;
        }
        return -1;
    }
    /* Function to reverse the linked list */
    Node* printReverse()
    {
        node* node0;
        if (node0 == NULL)
            return NULL;
        if (node0->nxt == NULL)
        {
            head = node0;
            cout<<node0<<" ";
        }
        node* node1 = printReverse();
        node1->nxt = node0;
        node0->nxt = NULL;
        cout<<node0<<" ";
    }
};

int main()
{
    LinkedList l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";
    l.Traverse();

    l.printReverse();

    l.Traverse();

//    l.Traverse();
//    l.swapFirst();
//    l.Traverse();
//    l.printReverse(l.head);

//    l.InsertAtHead(10);
//    // l.Traverse();
//    l.InsertAtHead(30);
//    // l.Traverse();
//    l.InsertAtHead(20);
//    // l.Traverse();
//    l.InsertAtHead(32);
//    l.InsertAtHead(40);
//    l.InsertAtHead(40);
//    l.Traverse();
//    cout<<"Size of linkedList : "<<l.getSize()<<endl;
//    cout<<"getValue(index) of linkedList : "<<l.getValue(3)<<endl;
//    l.reverse(l.head);
//    l.Traverse();
//    l.SearchDistinctValue(5);
    // int ans = l.SearchDistinctValue(30);
    // int ans = l.SearchAllValue(30);
//    cout<<"Found the index : "<<l.SearchDistinctValue(10)<<endl;
//    l.SearchAllValue(30);


    return 0;
}

//
//#include<bits/stdc++.h>
//using namespace std;
//void findMissing(vector<int>arr, int N)
//{
//    int i;
//    int temp[N + 1];
//    for(int i = 0; i <= N; i++)
//    {
//        temp[i] = 0;
//    }
//
//    for(i = 0; i < N; i++)
//    {
//        temp[arr[i] - 1] = 1;
//    }
//
//
//    int ans;
//    for (i = 0; i <= N ; i++)
//    {
//        if (temp[i] == 0)
//            ans = i  + 1;
//    }
//    cout << ans;
//}
//
//
//int main()
//{
//
//    int n;
//    cin>>n;
//    vector<int>a;
//    for(int i = 0; i<n; i++){
//        cin>>a[i];
//    }
//
//    findMissing(a, n); //a.size()
//    return 0;
//}
