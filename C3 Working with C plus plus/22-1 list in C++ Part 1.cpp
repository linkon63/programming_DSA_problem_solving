#include <bits/stdc++.h>

using namespace std;

void print(list<int>l)
{
    // o(n)
    // list<int>::iterator a = l.begin();
    auto a = l.begin();
    while(a != l.end()){
        cout<<*a<<" ";
        a++;
    }
    cout<<"\n";
}

void Insert(list<int>&l, int index, int value){
    auto it = l.begin();
    advance(it,index);
    l.insert(it, value);
}

void Delete(list<int>&l, int index){
    auto it = l.begin();
    advance(it, index);
    l.erase(it);
}
int main()
{
    list<int> l;
    //o(1)
    l.push_front(10);
    l.push_front(20);
    l.push_front(130);
    l.push_front(150);

    print(l);

    // pushback o(1)
    l.push_back(222);
    l.push_back(333);
    print(l);

    // pop_back

    l.pop_back();
    print(l);

    l.pop_front();
    print(l);

    // insert any position
//    auto it = l.begin();
//    advance(it,1);
//    l.insert(it, 333);
    Insert(l,1,2020);
    print(l);
    Delete(l,1);
    print(l);

    // size
    cout<<"\nSize:"<<l.size();

    return 0;
}
