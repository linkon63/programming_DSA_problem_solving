
#include <bits/stdc++.h>


using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int>a(n);

// taking inputs
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }


// Sorting
// Time Complexity   : ( (n-1) * n) / 2) = O(n^2);
// Memory Complexity :

    for(int pass = 0; pass<n; pass++)
    {
        int last = n-1-pass;
        bool sorted = true;
        for(int j = 0; j<=last-1; j++)
        {
            //
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
                sorted = false;
            }
        }
        if(sorted) break;
    cout<<"After Pass: "<<pass<<" -> ";
        for(int k = 0; k < n; k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<"\n";
    }
// after sorting
    for(int j = 0; j<n; j++)
    {
        cout<<a[j]<<" ";
    }


    return 0;
}

