#include <bits/stdc++.h>


using namespace std;

int main()
{
    multiset<int> a;
    a.insert(5);
    a.insert(7);
    a.insert(4);
    a.insert(3);
    a.insert(4);
    a.insert(7);


//  print o(n)
    cout<<"Printing multiset :\n";
    for(auto it:a)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"Size : "<<a.size()<<endl;

    a.erase(4);
    cout<<"Printing multiset :\n";
    for(auto it:a)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    a.erase(a.find(7));
     cout<<"Printing multiset :\n";
    for(auto it:a)
    {
        cout<<it<<" ";
    }
    cout<<endl;

}
