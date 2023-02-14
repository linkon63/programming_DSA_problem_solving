
#include <bits/stdc++.h>

using namespace std;


int main(){

stack<int> st;
st.push(10);
st.push(20);
st.push(30);
cout<<"Size : "<<st.size()<<endl;

cout<<st.top()<<endl;
//pop
st.pop();
cout<<st.top()<<endl;
st.pop();
cout<<st.top()<<endl;
st.pop();
cout<<"Size : "<<st.size()<<endl;



}
