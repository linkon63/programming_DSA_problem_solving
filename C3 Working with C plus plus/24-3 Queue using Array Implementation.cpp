#include <bits/stdc++.h>

using namespace std;

const int MAX_SIZE = 500;

class Queue{
    public:
    int a[MAX_SIZE];
    int l,r;

    Queue(){
    l = 0;
    r = -1;
    }

    void enqueue(int val){
        if(r+1 >=MAX_SIZE){
            cout<<"Queue is full\n";
            return;
        }
        r++;
        a[r] = val;
    }

    void dequeue(){
        if(l>r){
            cout<<"Queue is empty\n";
            return;
        }
        l++;
    }

    int front(){
    if(l>r){
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];
    }
    int size(){
    return r-l+1;
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


