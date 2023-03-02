#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int>pq;
    pq.push(10);
    pq.push(5);
    pq.push(3);
    pq.push(8);
    pq.push(9);

    while(pq.size() != 0){
        // top o(1)
        cout<<pq.top()<<" "<<endl;
        // pop o(logn)
        pq.pop();
    }
    return 0;
}
