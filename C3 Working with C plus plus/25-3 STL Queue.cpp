
#include <bits/stdc++.h>

using namespace std;

int main(){

queue<int> q;
q.push(10);
q.push(20);
q.push(30);

cout<<"Size:"<<q.size()<<"\n";
cout<<"Q empty:"<<q.empty()<<"\n";

cout<<q.front()<<"\n";
q.pop();
cout<<q.front()<<"\n";

q.pop();
cout<<q.front()<<"\n";

q.pop();
cout<<q.front()<<"\n";

cout<<"Size:"<<q.size()<<"\n";

queue<char> q2;
q2.push('a');
cout<<q2.front()<<"\n";

q2.push('b');
cout<<q2.front()<<"\n";

q2.push('c');
cout<<q2.front()<<"\n";


return 0;
}
