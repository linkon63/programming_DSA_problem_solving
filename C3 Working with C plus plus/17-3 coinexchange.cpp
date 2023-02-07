//#include <bits/stdc++.h>
//
//using namespace std;
//vector<int>coins = {1,3,4};
//int coin_change(int n)
//{
//    if(n==0) return 0;
//
//    int ans = 100000000;
//    for(int i = 0; i<coins.size(); i++)
//    {
//        if(n>= coins[i])
//        {
//            ans = min(ans, 1+coin_change(n-coins[i]));
//        }
//    }
//    return ans;
//}
//int main()
//{
//    cout<<coin_change(10);
//    return 0;
//
//}



#include <iostream>
#include <vector>

using namespace std;
void reverse_array(vector<int> arr)
{
    int left = 0, right = arr.size() - 1;
    while (left < right)
    {
        swap(arr[left], arr[right]);
        ++left;
        --right;
    }
    return arr;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i = 0; i<n; i++)
        cin>>arr[i];
    reverse_array(arr);
    for (int i = 0; i<n; i++)
    {
        cout << i << " ";
    }
    return 0;
}
