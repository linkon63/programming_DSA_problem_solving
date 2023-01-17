#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector <int>a(n);
    for(int i = 0; i< n; i++){
        cin>>a[i];
    }
    int mini = a[0];
    int maxi = a[0];
    int sum = 0;

    for(int i= 0; i<n; i++){
        sum = sum+a[i];
        maxi = max(maxi,a[i]);
        mini = min(mini,a[i]);
    }

   cout<<"Max:"<<maxi<<endl<<"Min:"<<mini<<endl<<"Sum:"<<sum<<endl;

        return 0;
}


//int a,b,c;
//    cin>>a>>b>>c;
//    cout<<a<<" "<< b << " " <<c<<endl;
//    int maxi = max({a,b,c});
//    int mini = min({a,b,c});
//    int sum = a+b+c;
//    int mul = a*b*c;
//    cout<<"Max:"<<maxi<<endl<<"Min:"<<mini<<endl<<"Sum:"<<sum<<endl<<"Mul:"<<mul<<endl;
