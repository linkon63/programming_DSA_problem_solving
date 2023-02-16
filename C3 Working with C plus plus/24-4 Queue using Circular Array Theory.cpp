
#include <bits/stdc++.h>

using namespace std;

const int MAX_SIZE = 500;

class Queue{
    public:
    int a[MAX_SIZE];
    int l,r,sz;

    Queue(){
    l = 0;
    r = -1;
    sz=0;
    }

    void enqueue(int val){
        if(sz == MAX_SIZE){
            cout<<"Queue is full\n";
            return;
        }
        r++;
        if(r == MAX_SIZE){
            r = 0;
        }
        a[r] = val;
        sz++;
    }

    void dequeue(){
        if(sz == 0){
            cout<<"Queue is empty\n";
            return;
        }
        l++;
        if(l == MAX_SIZE){
            l = 0;
        }
        sz--;
    }

    int front(){
    if(l>r){
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];
    }
    int size(){
    return sz;
    }

};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout<<"Size:"<<q.size()<<endl;

    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();
    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<"Size:"<<q.size()<<endl;


    return 0;
}


