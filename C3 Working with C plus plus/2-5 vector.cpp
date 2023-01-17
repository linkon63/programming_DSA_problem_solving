#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector <int> a;
    for(int i = 0; i<10; i++)
    {
        a.push_back(i);
    }

    for(int i = 0; i<a.size(); i++)
    {
        //a.size()
        cout<<a[i]<<"\n";
    }

    cout<<"before insert in the front"<<endl;

    a.insert(a.begin() + 0, 233);

    for(int i = 0; i<a.size(); i++)
    {
        cout<<a[i]<<"\n";
    }

    cout<<"We are resizing the value"<<endl;
    a.resize(5);
    for(int i = 0; i<a.size(); i++)
    {
        cout<<a[i]<<"\n";
    }
    cout<<"pushbeck"<<endl;
    a.push_back(7);
    for(int i = 0; i<a.size(); i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}
