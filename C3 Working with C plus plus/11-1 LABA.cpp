
#include<bits/stdc++.h>
using namespace std;
void findMissing(vector<int>arr, int N)
{
    int i;
    int temp[N + 1];
    for(int i = 0; i <= N; i++)
    {
        temp[i] = 0;
    }

    for(i = 0; i < N; i++)
    {
        temp[arr[i] - 1] = 1;
    }


    int ans;
    for (i = 0; i <= N ; i++)
    {
        if (temp[i] == 0)
            ans = i  + 1;
    }
    cout << ans;
}


int main()
{

    int n;
    cin>>n;
    vector<int>a;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    findMissing(a, n); //a.size()
    return 0;
}
