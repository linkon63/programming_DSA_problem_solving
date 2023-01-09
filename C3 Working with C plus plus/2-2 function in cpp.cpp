#include <iostream>

using namespace std;
string eraseF_ereaseL(string s)
{
    s.erase(s.begin());
    s.pop_back();
    return s;
}

int main()
{
    string s;
    cin>>s;
    string ans = eraseF_ereaseL(s);
    cout<<"Your output string is:"<<ans<<endl;
    return 0;
}

