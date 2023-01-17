
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v= {2,5,1,9,7};
    reverse(v.begin(),v.end());

    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << '\n';
//    string s="2997";
//    s+="11";
//    cout << s.size() << '\n';
//
//    return 0;
//    vector<int> v= {2,9,1,3,7};
//
//    sort(v.begin()+1,v.begin()+3);
//
//    for(int i=0; i<v.size(); i++)
//        cout << v[i] << " ";
//    cout << '\n';
//    return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    string s="abcde";
//    s.erase(s.begin()+(2-2));
//
//    cout << s << '\n';
//    return 0;
//}

//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//
//    int a = 5, b = 10;
//
//    swap(a,b);
//    cout<<a<<" <-> " <<b<<"\n";
//
//    int minValue = min(a,b);
//    int maxValue = max(a,b);
//    cout<<"Min value is: "<<minValue<<endl;
//    cout<<"Max value is: "<<maxValue<<endl;
//
//    int x = 8, y = 9, z = 7;
//    cout<<"Max value in 3 : "<<max({x,y,z})<<endl;
//    vector<int> arr = {3,5,9,4,6};
//
//    for(int i = 0; i < arr.size(); i++){
//        cout<<arr[i]<<" ";
//    }
//
//    cout<<"After sort : "<<endl;
//    sort(arr.begin(), arr.end());
//
//    for(int i = 0; i< arr.size(); i++){
//        cout<<arr[i]<<" ";
//    }
//
//
//    return 0;
//}
