#include <bits/stdc++.h>

using namespace std;
template <class T>
class node
{
public:
    T data;
    node *nxt;
    node *prv;
};
template <class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    // creates a new node with given data and return o(1)
    node<T> *CreateNewNode(T data)
    {
        node<T> *newNode = new node<T>;
        newNode->data = data;
        newNode->nxt = NULL;
        newNode->prv = NULL;
        return newNode;
    }
    // insert node at head given  data; o(1)
    void InsertAtHead(T data)
    {
        node<T> *newNode = CreateNewNode(data);
        if (head == NULL)
        {
            sz++;
            head = newNode;
            return;
        }
        sz++;
        node<T> *a = head;
        newNode->nxt = a;
        a->prv = newNode;
        head = newNode;
    }

    void DeleteAtHead()
    {
        node<T> *a = head;
        node<T> *b = head->nxt;
        delete a;
        if(b!=NULL)
        {
            b->prv = NULL;
        }
        head = b;
        sz--;
    }
    // o(n)
    void Traverse()
    {
        node<T> *a = head;
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



};
template <class T>

class Stack
{
    public:
    DoublyLinkedList<T> dl;
    Stack()
    {

    }
    T top()
    {
        if(dl.getSize() == 0)
        {
            cout<<"Stack is empty\n";
            T a;
            return a;
        }
        return dl.head->data;
    }

    void push(T value)
    {
        dl.InsertAtHead(value);
    }
    void pop()
    {
        if(dl.getSize() == 0)
        {
            return ;
        }
        dl.DeleteAtHead();
    }

    T getSize(){
    return dl.sz;
    }
};
int main()
{

    Stack<int> st;

    st.push(5);
    cout<<st.top()<<endl;
    st.push(2);
    cout<<st.top()<<endl;
    st.push(3);
    cout<<st.top()<<endl;

    cout<<"Reverse Stack\n";

    Stack<int> st2;
    while(st.getSize() > 0){
        st2.push(st.top());
        st.pop();
    }

    swap(st,st2);
    while(st.getSize() > 0){
        cout<<st.top()<<"\n";
        st.pop();
    }

//    st.push('5');
//    cout<<st.top()<<endl;
//
//    st.pop();
//    st.pop();
//    st.pop();
//    st.pop();
//    st.pop();
//    cout<<st.top()<<endl;
    return 0;
}

