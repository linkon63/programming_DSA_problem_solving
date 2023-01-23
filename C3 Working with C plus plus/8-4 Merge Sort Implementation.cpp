

#include <bits/stdc++.h>
using namespace std;


vector<int>merge_sort(vector<int>a)
{
    //base case
    if(a.size() <= 1)
    {
        return a;
    }

    int mid = a.size() / 2;
    vector<int>b;
    vector<int>c;


    for(int i =0; i<mid; i++)
        b.push_back(a[i]);

    for(int i =mid; i<a.size(); i++)
        b.push_back(a[i]);


    vector<int>sorted_b = merge_sort(b);
    vector<int>sorted_c = merge_sort(c);

//    if(a.size() == 1)
//    {
//        return a;
//    }

}

int main()
{


    return 0;
}
