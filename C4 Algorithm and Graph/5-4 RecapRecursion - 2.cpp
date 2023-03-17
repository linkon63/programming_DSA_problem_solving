#include <bits/stdc++.h>
using namespace std;

is_palindrome(string str)
{
    // base case
    if(str == "" || str.size() == 1)
    {
        return true;
    }

    int n = str.size();
    string small_str = str.substr(1, n-2);
    return is_palindrome(small_str) && (str[0] == str.back());
}

int main()
{
    string st;
    cin>>st;
    if(is_palindrome(st))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}



