#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    st.insert(5);
    st.insert(5);
    st.insert(3);
    st.insert(3);
    st.insert(4);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(3);
    st.insert(4);
    cout<<"Printing set \n";

    for(auto i:st)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // o(1)
    cout<<"Set Size :";
    cout<<st.size()<<endl;

    if(st.find(9) != st.end()){
            cout<<"9 Found\n";
    }else{
            cout<<"9 Not Found\n";
    }

    st.erase(4);

    //O(n)
    cout<<"Printing set \n";
    for(auto it = st.begin(); it != st.end(); it++)
    {
      cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}
