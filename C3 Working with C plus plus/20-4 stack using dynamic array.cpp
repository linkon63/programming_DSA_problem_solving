#include <bits/stdc++.h>

using namespace std;

// stack using static array
class Stack
{
public:
    int *a;
    int cap;
    int stack_size;
    Stack()
    {
        a = new int[1];
        cap = 1;
        stack_size = 0;
    }

    // makes the array cap multiplied by two
    void increse_size()
    {
        int *temp;
        temp = new int [cap*2];
        for (int i = 0; i<cap; i++)
        {
            temp[i] = a[i];
        }
        swap(a,temp);
        delete []temp;
        cap = cap*2;
    }
    // add an element in the stack o(1)
    void push(int val)
    {
        if(stack_size + 1 > cap)
        {
            increse_size();
        }
        stack_size+= 1;
        a[stack_size - 1] = val;
    }
    // delete the top most element from stack o(1)
    void pop()
    {
        if(stack_size == 0)
        {
            cout<<"Stack size is empty"<<endl;
            return;
        }
        a[stack_size - 1] = 0;
        stack_size = stack_size - 1;
    }
    // return the top el from the stack o(n)
    int top()
    {
        if(stack_size == 0)
        {
            cout<<"Stack size is empty"<<endl;
            return -1;
        }
        return a[stack_size - 1];
    }


};


int main()
{
    Stack st;
    st.push(3);
    cout<<st.top()<<endl;
    st.push(4);
    cout<<st.top()<<endl;
    st.push(5);
    cout<<st.top()<<endl;

    st.push(6);
    cout<<st.top()<<endl;

    st.pop();
    cout<<st.top()<<endl;
    return 0;
}




