
#include <bits/stdc++.h>

using namespace std;


class Queue
{
public:
    int *a;
    int array_cap;
    int l,r,sz;

    Queue()
    {
        a = new int[1];
        array_cap = 1;
        l = 0;
        r = -1;
        sz=0;
    }

    void remove_circular()
    {
        if(l>r)
        {
            int *temp = new int[array_cap];
            int idx = 0;
            for(int i = l; i<array_cap; i++)
            {
                temp[idx] = a[i];
                idx++;
            }

            for(int i = 0; i<=r; i++)
            {
                temp[idx] = a[i];
                idx++;
            }
            swap(temp,a);
            l = 0;
            r = array_cap - 1;
        }
    }

    void increse_size()
    {
        remove_circular();
        // increase size
        int *temp = new int[array_cap*2];
        for(int i = 0; i<array_cap; i++)
        {
            temp[i] = a[i];
        }
        swap(a,temp);
        array_cap = array_cap*2;
        delete [] temp;
    }

    void enqueue(int val)
    {
        if(sz == array_cap)
        {
          increse_size();
        }
        r++;
        if(r == array_cap)
        {
            r = 0;
        }
        a[r] = val;
        sz++;
    }

    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty\n";
            return;
        }
        l++;
        if(l == array_cap)
        {
            l = 0;
        }
        sz--;
    }

    int front()
    {
        if(l>r)
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];
    }
    int size()
    {
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



