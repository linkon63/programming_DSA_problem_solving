#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> mp;
    //insert o(n)
    mp["goru"] = 1;
    mp["chagol"] = 2;
    mp["vera"] = 3;
    // value of a key  o(logn)
    cout<<mp["goru"]<<"\n";
    cout<<mp["vera"]<<"\n";

    mp["cat"] = 2;
    cout<<mp["cat"]<<"\n";
    mp["cat"] = 5;
    cout<<mp["cat"]<<"\n";
    //print the map

    for(auto it:mp)
    {
        cout<<"Key:"<<it.first<<" , value:"<<it.second<<"\n";
    }
    map<int,int> mp2;
    mp2[641] = 1;
    mp2[645] = 2;
    mp2[644] = 3;
    mp2[640] = 4;
    // o(1)
    cout<<"size of map 2 :"<<mp2.size()<<endl;
    cout<<"printing map 2\n";
    for(auto it:mp2)
    {
        cout<<"Key:"<<it.first<<" , value:"<<it.second<<"\n";
    }
}
