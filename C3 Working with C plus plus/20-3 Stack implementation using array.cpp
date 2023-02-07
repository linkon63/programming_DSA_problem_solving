#include <bits/stdc++.h>

using namespace std;
const int MAX_SIZE = 500;

// stack using static array
class Stack
{
public:
    int a[MAX_SIZE];
    int stack_size;
    Stack()
    {
        stack_size = 0;
    }
    // add an element in the stack o(1)
    void push(int val)
    {
        if(stack_size + 1 > MAX_SIZE)
        {
            cout<<"Stack is full"<<endl;
            return;
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




