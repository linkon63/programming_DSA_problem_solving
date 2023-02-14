#include <bits/stdc++.h>

using namespace std;

/// template based stack using dynamic array
template <class T>
// stack using static array
class Stack
{
public:
    T *a;
    int cap;
    int stack_size;
    Stack()
    {
        a = new T[1];
        cap = 1;
        stack_size = 0;
    }

    // makes the array cap multiplied by two
    void increse_size()
    {
        T *temp;
        temp = new T[cap * 2];
        for (int i = 0; i < cap; i++)
        {
            temp[i] = a[i];
        }
        swap(a, temp);
        delete[] temp;
        cap = cap * 2;
    }
    // add an element in the stack o(1)
    void push(T val)
    {
        if (stack_size + 1 > cap)
        {
            increse_size();
        }
        stack_size += 1;
        a[stack_size - 1] = val;
    }
    // delete the top most element from stack o(1)
    void pop()
    {
        if (stack_size == 0)
        {
            cout << "Stack size is empty" << endl;
            return;
        }
        // a[stack_size - 1] = 0;
        stack_size = stack_size - 1;
    }
    // return the top el from the stack o(n)
    T top()
    {
        if (stack_size == 0)
        {
            cout << "Stack size is empty" << endl;
            assert(false);
            T a;
            return a;
        }
        return a[stack_size - 1];
    }
};

int main()
{
    Stack<double> st;
    st.push(3.5);
    cout << st.top() << endl;
    st.push(4.4);
    cout << st.top() << endl;
    st.push(5.3);
    cout << st.top() << endl;

    // st.push(6);
    // cout<<st.top()<<endl;

    // st.pop();
    // cout<<st.top()<<endl;
    return 0;
}
